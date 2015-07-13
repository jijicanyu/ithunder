#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include "rwlock.h"
#include "bmap.h"

void *bmap_init(char *file)
{
    BMAP *bmap = NULL;
    struct stat st = {0};

    if(file && (bmap = (BMAP *)calloc(1, sizeof(bmap))))
    {
        if((bmap->fd = open(file, O_CREAT|O_RDWR, 0644)) > 0
                && fstat(bmap->fd, &st) == 0)
        {
            bmap->size = st.st_size;
            bmap->id_max = bmap->size / 8;
            if((bmap->mbits = (char *)mmap(NULL, BMAP_ID_MAX/8, PROT_READ|PROT_WRITE, 
                    MAP_SHARED, bmap->fd, 0)) == NULL || bmap->mbits == (void *)MAP_FAILED)
            {
                fprintf(stderr, "mmap file(%s) failed, %s", file, strerror(errno));
                _exit(-1);
            }
            if((bmap->bits = (char *)mmap(NULL, BMAP_ID_MAX/8, PROT_READ|PROT_WRITE, 
                    MAP_ANON|MAP_PRIVATE, -1, 0)) == NULL 
                    || bmap->bits == (void *)MAP_FAILED)
            {
                fprintf(stderr, "new mmap failed, %s", strerror(errno));
                _exit(-1);
            }
            if(bmap->size > 0)
            {
                memcpy(bmap->bits, bmap->mbits, bmap->size);
            }
            RWLOCK_INIT(bmap->mutex);
        }
        else
        {
            fprintf(stderr, "create file(%s) failed, %s", file, strerror(errno));
            _exit(-1);
        }
    }
    return bmap;
}

int bmap_resize(BMAP *bmap, int id)
{
    int ret = -1;

    if(bmap && id >= 0 && id < BMAP_ID_MAX)
    {

    }
}

void bmap_set(void *p, int id)
{
    BMAP *bmap = NULL;
    int ret = -1;

    if((bmap = (BMAP *)p))
    {
        RWLOCK_WRLOCK(bmap->mutex);
        if(id >= bmap->id_max && (ret = bmap_resize(bmap, id))) return ret;
        bmap->mbits[(id/8)] |= 1 << id % 8;
        bmap->bits[(id/8)] |= 1 << id % 8;
        RWLOCK_UNLOCK(bmap->mutex);
        ret = 0;
    }
    return ret;
}

void bmap_unset(void *p, int id)
{
    BMAP *bmap = NULL;
    int ret = -1;

    if((bmap = (BMAP *)p))
    {
        RWLOCK_WRLOCK(bmap->mutex);
        if(id >= bmap->id_max && (ret = bmap_resize(bmap, id))) return ret;
        bmap->mbits[(id/8)] &= ~(1 << id % 8);
        bmap->bits[(id/8)] &= ~(1 << id % 8);
        RWLOCK_UNLOCK(bmap->mutex);
        ret = 0;
    }
    return ret;
}

int bmap_check(void *p, int id)
{
    BMAP *bmap = NULL;
    int ret = 0;

    if((bmap = (BMAP *)p) && id < bmap->id_maxa)
    {
        ret = (bmap->bits[(id/8)] & (1 << id % 8));
    }
    return ret;
}

void bmap_clean(void *p);
{
    BMAP *bmap = NULL;

    if((bmap = (BMAP *)p))
    {
        munmap(bmap->bits, BMAP_ID_MAX/8);
        munmap(bmap->mbits, BMAP_ID_MAX/8);
        close(bmap->fd);
        RWLOCK_DESTROY(bmap->mutex);
        free(bmap);
    }
    return ;
}