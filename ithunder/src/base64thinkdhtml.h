#ifndef _BASE64_HTML_H
#define _BASE64_HTML_H
static const char *html_code_base64 = "PGh0bWwgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzE5OTkveGh0bWwiPgogICAgPGhlYWQ+CiAgICA8dGl0bGU+VGhpbmtkIE1vbml0b3I8L3RpdGxlPgogICAgPG1ldGEgaHR0cC1lcXVpdj0iQ29udGVudC1UeXBlIiBjb250ZW50PSJ0ZXh0L2h0bWw7IGNoYXJzZXQ9VVRGLTgiPgogICAgPHN0eWxlPgogICAgICAgIGJvZHkuSUVfTTcsIGJvZHkuSUVfTTgsIGJvZHkuV2luNntmb250LWZhbWlseToiU2Vnb2UgVUkiLCBUYWhvbWEsIFZlcmRhbmEsIEFyaWFsO30KICAgICAgICBib2R5LlNhZmFyaXttaW4td2lkdGg6OTg3cHg7fQogICAgICAgIGJvZHkuU0ZfaVBob25ley13ZWJraXQtdGV4dC1zaXplLWFkanVzdDpub25lO30KICAgICAgICBib2R5CiAgICAgICAgewogICAgICAgICAgICBtYXJnaW46MDtmb250LWZhbWlseTpUYWhvbWEsIFZlcmRhbmEsIEFyaWFsOwogICAgICAgICAgICBiYWNrZ3JvdW5kLWNvbG9yOiNGRUZFRkU7CiAgICAgICAgICAgIGNvbG9yOiMzMzM7CiAgICAgICAgICAgIGZvbnQtc2l6ZToxMnB0OwogICAgICAgICAgICB3aWR0aDoxMDAlOwogICAgICAgICAgICBoZWlnaHQ6MTAwJTsKICAgICAgICB9CiAgICAgICAgZm9ybXttYXJnaW46MHB4O2Rpc3BsYXk6IGlubGluZX0KICAgICAgICAjbWFpbmZyYW1le3Bvc2l0aW9uOnJlbGF0aXZlO2JhY2tncm91bmQtY29sb3I6I0ZFRkVGRTt3aWR0aDoxMDAlO2hlaWdodDoxMDAlO30KICAgICAgICAjdGFza3twb3NpdGlvbjphYnNvbHV0ZTtiYWNrZ3JvdW5kLWNvbG9yOiNGNEZCRkY7ZGlzcGxheTppbmxpbmU7CiAgICAgICAgICAgIGJvcmRlcjoxcHggc29saWQgIzgxQkVGNztwYWRkaW5nOjBweDtsZWZ0OjBweDt0b3A6MHB4O3dpZHRoOjEwMCU7aGVpZ2h0OjEwMCU7fQogICAgICAgIC50YXNrbGlzdHtwb3NpdGlvbjpyZWxhdGl2ZTtwYWRkaW5nOjBweDsgYmFja2dyb3VuZC1jb2xvcjojRDBFOUY3O30KICAgICAgICAudGFza3RpdGxle3Bvc2l0aW9uOnJlbGF0aXZlO2JhY2tncm91bmQtY29sb3I6IzJGNUZBMTtjb2xvcjojYzBjMGMwOyBoZWlnaHQ6MzBweDt9CiAgICAgICAgI3Rhc2tzZWxlY3R7cG9zaXRpb246cmVsYXRpdmU7YmFja2dyb3VuZC1jb2xvcjojRDBFOUY3O2NvbG9yOiMyRjVGQTE7d2lkdGg6MTAwJTt9CiAgICAgICAgI3Rhc2tsaXN0cyAudGFza2xpc3Rze3Bvc2l0aW9uOnJlbGF0aXZlO2JhY2tncm91bmQtY29sb3I6I0Y0RkJGRjtjb2xvcjojMkY1RkExO30KICAgICAgICAudGFzay10aXRsZXtiYWNrZ3JvdW5kLWNvbG9yOiMyRjVGQTE7Y29sb3I6I2MwYzBjMDtoZWlnaHQ6MzBweDt3aWR0aDoxMDAlO30KICAgICAgICAudWx0YWJ7bGlzdC1zdHlsZTpub25lO3BhZGRpbmc6MDttYXJnaW46MDt3aWR0aDoxMDAlO30KICAgICAgICAubHRhYm5hbWV7Y3Vyc29yOnBvaW50ZXI7Zm9udC1zaXplOjEycHQ7fQogICAgICAgIC5sdGFie2JhY2tncm91bmQtY29sb3I6I0QwRTlGNztjdXJzb3I6IHBvaW50ZXI7d2lkdGg6MTAwJTt9CiAgICAgICAgLmx0YWItc2VsZWN0ZWR7YmFja2dyb3VuZC1jb2xvcjojRjRGQkZGO2N1cnNvcjogcG9pbnRlcjt3aWR0aDoxMDAlO30KICAgICAgICAubGZuYW1le2N1cnNvcjogcG9pbnRlcjt9CiAgICAgICAgLmx0YXNre2JhY2tncm91bmQtY29sb3I6I0Y0RkJGRjtjdXJzb3I6IHBvaW50ZXI7fQogICAgICAgIC5sdGFzay1zZWxlY3RlZHtiYWNrZ3JvdW5kLWNvbG9yOiNEMEU5Rjc7Y3Vyc29yOiBwb2ludGVyO30KICAgICAgICAuZWFkZHtjb2xvcjojNUZCNDA0O2ZvbnQtc2l6ZToxM3B0O2ZvbnQtd2VpZ2h0OmJvbGRlcjtjdXJzb3I6cG9pbnRlcjt9CiAgICAgICAgLmV1cGRhdGV7Y29sb3I6I0ZGODAwMDtmb250LXNpemU6MTNwdDtmb250LXdlaWdodDpib2xkZXI7Y3Vyc29yOnBvaW50ZXI7fQogICAgICAgIC5lZGVsZXRle2NvbG9yOiNCNDA0NUY7Zm9udC1zaXplOjEzcHQ7Zm9udC13ZWlnaHQ6Ym9sZGVyO2N1cnNvcjpwb2ludGVyO30KICAgICAgICAuZXZpZXd7Y29sb3I6IzAwMDBmZjtmb250LXNpemU6MTNwdDtmb250LXdlaWdodDpib2xkZXI7Y3Vyc29yOnBvaW50ZXI7fQogICAgICAgIC5jbG9zZXR4dHtjdXJzb3I6cG9pbnRlcjtmb250LXNpemU6MTBwdDtjb2xvcjojY2NjY2NjO3RleHQtYWxpZ246cmlnaHQ7fQogICAgICAgIC5udGFza3tkaXNwbGF5OmlubGluZTtjb2xvcjpyZWQ7Zm9udC1zaXplOjEycHQ7fQogICAgICAgIDwvc3R5bGU+CiAgICAgICAgPHNjcmlwdCBsYW5ndWFnZT0namF2YXNjcmlwdCc+CiAgICAgICAgICAgIHZhciBjaHJhZGQgPSAn4pyaJywgY2hyZm9sZCA9ICfilronLCBjaHJ0cmVlID0gJ+KWvCcsIGNocmVkaXQ9J+KcjicsIGNocmRlbD0n4pyYJywgY2hydmlldyA9ICfimJwgJzsKICAgICAgICAgICAgdmFyIG9UaW1lciA9IG51bGw7CiAgICAgICAgICAgIHZhciBiYXNlNjRFbmNvZGVDaGFycyA9IAogICAgICAgICAgICAiQUJDREVGR0hJSktMTU5PUFFSU1RVVldYWVphYmNkZWZnaGlqa2xtbm9wcXJzdHV2d3h5ejAxMjM0NTY3ODkrLyI7CiAgICAgICAgICAgIHZhciBiYXNlNjREZWNvZGVDaGFycyA9IG5ldyBBcnJheSgKICAgICAgICAgICAgLTEsIC0xLCAtMSwgLTEsIC0xLCAtMSwgLTEsIC0xLCAtMSwgLTEsIC0xLCAtMSwgLTEsIC0xLCAtMSwgLTEsCiAgICAgICAgICAgIC0xLCAtMSwgLTEsIC0xLCAtMSwgLTEsIC0xLCAtMSwgLTEsIC0xLCAtMSwgLTEsIC0xLCAtMSwgLTEsIC0xLAogICAgICAgICAgICAtMSwgLTEsIC0xLCAtMSwgLTEsIC0xLCAtMSwgLTEsIC0xLCAtMSwgLTEsIDYyLCAtMSwgLTEsIC0xLCA2MywKICAgICAgICAgICAgNTIsIDUzLCA1NCwgNTUsIDU2LCA1NywgNTgsIDU5LCA2MCwgNjEsIC0xLCAtMSwgLTEsIC0xLCAtMSwgLTEsCiAgICAgICAgICAgIC0xLCAgMCwgIDEsICAyLCAgMywgIDQsICA1LCAgNiwgIDcsICA4LCAgOSwgMTAsIDExLCAxMiwgMTMsIDE0LAogICAgICAgICAgICAxNSwgMTYsIDE3LCAxOCwgMTksIDIwLCAyMSwgMjIsIDIzLCAyNCwgMjUsIC0xLCAtMSwgLTEsIC0xLCAtMSwKICAgICAgICAgICAgLTEsIDI2LCAyNywgMjgsIDI5LCAzMCwgMzEsIDMyLCAzMywgMzQsIDM1LCAzNiwgMzcsIDM4LCAzOSwgNDAsCiAgICAgICAgICAgIDQxLCA0MiwgNDMsIDQ0LCA0NSwgNDYsIDQ3LCA0OCwgNDksIDUwLCA1MSwgLTEsIC0xLCAtMSwgLTEsIC0xKTsKICAgICAgICAgICAgZnVuY3Rpb24gYmFzZTY0ZW5jb2RlKHN0cikgCiAgICAgICAgICAgIHsKICAgICAgICAgICAgICAgIHZhciBvdXQsIGksIGxlbjsKICAgICAgICAgICAgICAgIHZhciBjMSwgYzIsIGMzOwoKICAgICAgICAgICAgICAgIGxlbiA9IHN0ci5sZW5ndGg7CiAgICAgICAgICAgICAgICBpID0gMDsKICAgICAgICAgICAgICAgIG91dCA9ICIiOwogICAgICAgICAgICAgICAgd2hpbGUoaSA8IGxlbikgewogICAgICAgICAgICAgICAgICAgIGMxID0gc3RyLmNoYXJDb2RlQXQoaSsrKSAmIDB4ZmY7CiAgICAgICAgICAgICAgICAgICAgaWYoaSA9PSBsZW4pCiAgICAgICAgICAgICAgICAgICAgewogICAgICAgICAgICAgICAgICAgICAgICBvdXQgKz0gYmFzZTY0RW5jb2RlQ2hhcnMuY2hhckF0KGMxID4+IDIpOwogICAgICAgICAgICAgICAgICAgICAgICBvdXQgKz0gYmFzZTY0RW5jb2RlQ2hhcnMuY2hhckF0KChjMSAmIDB4MykgPDwgNCk7CiAgICAgICAgICAgICAgICAgICAgICAgIG91dCArPSAiPT0iOwogICAgICAgICAgICAgICAgICAgICAgICBicmVhazsKICAgICAgICAgICAgICAgICAgICB9CiAgICAgICAgICAgICAgICAgICAgYzIgPSBzdHIuY2hhckNvZGVBdChpKyspOwogICAgICAgICAgICAgICAgICAgIGlmKGkgPT0gbGVuKQogICAgICAgICAgICAgICAgICAgIHsKICAgICAgICAgICAgICAgICAgICAgICAgb3V0ICs9IGJhc2U2NEVuY29kZUNoYXJzLmNoYXJBdChjMSA+PiAyKTsKICAgICAgICAgICAgICAgICAgICAgICAgb3V0ICs9IGJhc2U2NEVuY29kZUNoYXJzLmNoYXJBdCgoKGMxICYgMHgzKTw8IDQpIHwgKChjMiAmIDB4RjApID4+IDQpKTsKICAgICAgICAgICAgICAgICAgICAgICAgb3V0ICs9IGJhc2U2NEVuY29kZUNoYXJzLmNoYXJBdCgoYzIgJiAweEYpIDw8IDIpOwogICAgICAgICAgICAgICAgICAgICAgICBvdXQgKz0gIj0iOwogICAgICAgICAgICAgICAgICAgICAgICBicmVhazsKICAgICAgICAgICAgICAgICAgICB9CiAgICAgICAgICAgICAgICAgICAgYzMgPSBzdHIuY2hhckNvZGVBdChpKyspOwogICAgICAgICAgICAgICAgICAgIG91dCArPSBiYXNlNjRFbmNvZGVDaGFycy5jaGFyQXQoYzEgPj4gMik7CiAgICAgICAgICAgICAgICAgICAgb3V0ICs9IGJhc2U2NEVuY29kZUNoYXJzLmNoYXJBdCgoKGMxICYgMHgzKTw8IDQpIHwgKChjMiAmIDB4RjApID4+IDQpKTsKICAgICAgICAgICAgICAgICAgICBvdXQgKz0gYmFzZTY0RW5jb2RlQ2hhcnMuY2hhckF0KCgoYzIgJiAweEYpIDw8IDIpIHwgKChjMyAmIDB4QzApID4+NikpOwogICAgICAgICAgICAgICAgICAgIG91dCArPSBiYXNlNjRFbmNvZGVDaGFycy5jaGFyQXQoYzMgJiAweDNGKTsKICAgICAgICAgICAgICAgIH0KICAgICAgICAgICAgICAgIHJldHVybiBvdXQ7CiAgICAgICAgICAgIH0KICAgICAgICAgICAgZnVuY3Rpb24gYmFzZTY0ZGVjb2RlKHN0cikKICAgICAgICAgICAgewogICAgICAgICAgICAgICAgdmFyIGMxLCBjMiwgYzMsIGM0OwogICAgICAgICAgICAgICAgdmFyIGksIGxlbiwgb3V0OwoKICAgICAgICAgICAgICAgIGxlbiA9IHN0ci5sZW5ndGg7CiAgICAgICAgICAgICAgICBpID0gMDsKICAgICAgICAgICAgICAgIG91dCA9ICIiOwogICAgICAgICAgICAgICAgd2hpbGUoaSA8IGxlbikgewogICAgICAgICAgICAgICAgICAgIC8qIGMxICovCiAgICAgICAgICAgICAgICAgICAgZG8gewogICAgICAgICAgICAgICAgICAgICAgICBjMSA9IGJhc2U2NERlY29kZUNoYXJzW3N0ci5jaGFyQ29kZUF0KGkrKykgJiAweGZmXTsKICAgICAgICAgICAgICAgICAgICB9IHdoaWxlKGkgPCBsZW4gJiYgYzEgPT0gLTEpOwogICAgICAgICAgICAgICAgICAgIGlmKGMxID09IC0xKQogICAgICAgICAgICAgICAgICAgIGJyZWFrOwoKICAgICAgICAgICAgICAgICAgICAvKiBjMiAqLwogICAgICAgICAgICAgICAgICAgIGRvIHsKICAgICAgICAgICAgICAgICAgICAgICAgYzIgPSBiYXNlNjREZWNvZGVDaGFyc1tzdHIuY2hhckNvZGVBdChpKyspICYgMHhmZl07CiAgICAgICAgICAgICAgICAgICAgfSB3aGlsZShpIDwgbGVuICYmIGMyID09IC0xKTsKICAgICAgICAgICAgICAgICAgICBpZihjMiA9PSAtMSkKICAgICAgICAgICAgICAgICAgICBicmVhazsKCiAgICAgICAgICAgICAgICAgICAgb3V0ICs9IFN0cmluZy5mcm9tQ2hhckNvZGUoKGMxIDw8IDIpIHwgKChjMiAmIDB4MzApID4+IDQpKTsKCiAgICAgICAgICAgICAgICAgICAgLyogYzMgKi8KICAgICAgICAgICAgICAgICAgICBkbyB7CiAgICAgICAgICAgICAgICAgICAgICAgIGMzID0gc3RyLmNoYXJDb2RlQXQoaSsrKSAmIDB4ZmY7CiAgICAgICAgICAgICAgICAgICAgICAgIGlmKGMzID09IDYxKQogICAgICAgICAgICAgICAgICAgICAgICByZXR1cm4gb3V0OwogICAgICAgICAgICAgICAgICAgICAgICBjMyA9IGJhc2U2NERlY29kZUNoYXJzW2MzXTsKICAgICAgICAgICAgICAgICAgICB9IHdoaWxlKGkgPCBsZW4gJiYgYzMgPT0gLTEpOwogICAgICAgICAgICAgICAgICAgIGlmKGMzID09IC0xKQogICAgICAgICAgICAgICAgICAgIGJyZWFrOwoKICAgICAgICAgICAgICAgICAgICBvdXQgKz0gU3RyaW5nLmZyb21DaGFyQ29kZSgoKGMyICYgMFhGKSA8PCA0KSB8ICgoYzMgJiAweDNDKSA+PiAyKSk7CgogICAgICAgICAgICAgICAgICAgIC8qIGM0ICovCiAgICAgICAgICAgICAgICAgICAgZG8gewogICAgICAgICAgICAgICAgICAgICAgICBjNCA9IHN0ci5jaGFyQ29kZUF0KGkrKykgJiAweGZmOwogICAgICAgICAgICAgICAgICAgICAgICBpZihjNCA9PSA2MSkKICAgICAgICAgICAgICAgICAgICAgICAgcmV0dXJuIG91dDsKICAgICAgICAgICAgICAgICAgICAgICAgYzQgPSBiYXNlNjREZWNvZGVDaGFyc1tjNF07CiAgICAgICAgICAgICAgICAgICAgfSB3aGlsZShpIDwgbGVuICYmIGM0ID09IC0xKTsKICAgICAgICAgICAgICAgICAgICBpZihjNCA9PSAtMSkKICAgICAgICAgICAgICAgICAgICBicmVhazsKICAgICAgICAgICAgICAgICAgICBvdXQgKz0gU3RyaW5nLmZyb21DaGFyQ29kZSgoKGMzICYgMHgwMykgPDwgNikgfCBjNCk7CiAgICAgICAgICAgICAgICB9CiAgICAgICAgICAgICAgICByZXR1cm4gb3V0OwogICAgICAgICAgICB9CiAgICAgICAgICAgIGZ1bmN0aW9uIHV0ZjE2dG84KHN0cikKICAgICAgICAgICAgewogICAgICAgICAgICAgICAgdmFyIG91dCwgaSwgbGVuLCBjOwogICAgICAgICAgICAgICAgb3V0ID0gIiI7CiAgICAgICAgICAgICAgICBsZW4gPSBzdHIubGVuZ3RoOwogICAgICAgICAgICAgICAgZm9yKGkgPSAwOyBpIDwgbGVuOyBpKyspIHsKICAgICAgICAgICAgICAgICAgICBjID0gc3RyLmNoYXJDb2RlQXQoaSk7CiAgICAgICAgICAgICAgICAgICAgaWYgKChjID49IDB4MDAwMSkgJiYgKGMgPD0gMHgwMDdGKSkgewogICAgICAgICAgICAgICAgICAgICAgICBvdXQgKz0gc3RyLmNoYXJBdChpKTsKICAgICAgICAgICAgICAgICAgICAgICAgfSBlbHNlIGlmIChjID4gMHgwN0ZGKSB7CiAgICAgICAgICAgICAgICAgICAgICAgIG91dCArPSBTdHJpbmcuZnJvbUNoYXJDb2RlKDB4RTAgfCAoKGMgPj4gMTIpICYgMHgwRikpOwogICAgICAgICAgICAgICAgICAgICAgICBvdXQgKz0gU3RyaW5nLmZyb21DaGFyQ29kZSgweDgwIHwgKChjID4+ICA2KSAmIDB4M0YpKTsKICAgICAgICAgICAgICAgICAgICAgICAgb3V0ICs9IFN0cmluZy5mcm9tQ2hhckNvZGUoMHg4MCB8ICgoYyA+PiAgMCkgJiAweDNGKSk7CiAgICAgICAgICAgICAgICAgICAgICAgIH0gZWxzZSB7CiAgICAgICAgICAgICAgICAgICAgICAgIG91dCArPSBTdHJpbmcuZnJvbUNoYXJDb2RlKDB4QzAgfCAoKGMgPj4gIDYpICYgMHgxRikpOwogICAgICAgICAgICAgICAgICAgICAgICBvdXQgKz0gU3RyaW5nLmZyb21DaGFyQ29kZSgweDgwIHwgKChjID4+ICAwKSAmIDB4M0YpKTsKICAgICAgICAgICAgICAgICAgICB9CiAgICAgICAgICAgICAgICB9CiAgICAgICAgICAgICAgICByZXR1cm4gb3V0OwogICAgICAgICAgICB9CiAgICAgICAgICAgIGZ1bmN0aW9uIHV0Zjh0bzE2KHN0cikKICAgICAgICAgICAgewogICAgICAgICAgICAgICAgdmFyIG91dCwgaSwgbGVuLCBjOwogICAgICAgICAgICAgICAgdmFyIGNoYXIyLCBjaGFyMzsKICAgICAgICAgICAgICAgIG91dCA9ICIiOwogICAgICAgICAgICAgICAgbGVuID0gc3RyLmxlbmd0aDsKICAgICAgICAgICAgICAgIGkgPSAwOwogICAgICAgICAgICAgICAgd2hpbGUoaSA8IGxlbikgewogICAgICAgICAgICAgICAgICAgIGMgPSBzdHIuY2hhckNvZGVBdChpKyspOwogICAgICAgICAgICAgICAgICAgIHN3aXRjaChjID4+IDQpCiAgICAgICAgICAgICAgICAgICAgeyAKICAgICAgICAgICAgICAgICAgICAgICAgY2FzZSAwOiBjYXNlIDE6IGNhc2UgMjogY2FzZSAzOiBjYXNlIDQ6IGNhc2UgNTogY2FzZSA2OiBjYXNlIDc6CiAgICAgICAgICAgICAgICAgICAgICAgIC8vIDB4eHh4eHh4CiAgICAgICAgICAgICAgICAgICAgICAgIG91dCArPSBzdHIuY2hhckF0KGktMSk7CiAgICAgICAgICAgICAgICAgICAgICAgIGJyZWFrOwogICAgICAgICAgICAgICAgICAgICAgICBjYXNlIDEyOiBjYXNlIDEzOgogICAgICAgICAgICAgICAgICAgICAgICAvLyAxMTB4IHh4eHggICAxMHh4IHh4eHgKICAgICAgICAgICAgICAgICAgICAgICAgY2hhcjIgPSBzdHIuY2hhckNvZGVBdChpKyspOwogICAgICAgICAgICAgICAgICAgICAgICBvdXQgKz0gU3RyaW5nLmZyb21DaGFyQ29kZSgoKGMgJiAweDFGKSA8PCA2KSB8IChjaGFyMiAmIDB4M0YpKTsKICAgICAgICAgICAgICAgICAgICAgICAgYnJlYWs7CiAgICAgICAgICAgICAgICAgICAgICAgIGNhc2UgMTQ6CiAgICAgICAgICAgICAgICAgICAgICAgIC8vIDExMTAgeHh4eCAgMTB4eCB4eHh4ICAxMHh4IHh4eHgKICAgICAgICAgICAgICAgICAgICAgICAgY2hhcjIgPSBzdHIuY2hhckNvZGVBdChpKyspOwogICAgICAgICAgICAgICAgICAgICAgICBjaGFyMyA9IHN0ci5jaGFyQ29kZUF0KGkrKyk7CiAgICAgICAgICAgICAgICAgICAgICAgIG91dCArPSBTdHJpbmcuZnJvbUNoYXJDb2RlKCgoYyAmIDB4MEYpIDw8IDEyKSB8CiAgICAgICAgICAgICAgICAgICAgICAgICgoY2hhcjIgJiAweDNGKSA8PCA2KSB8CiAgICAgICAgICAgICAgICAgICAgICAgICgoY2hhcjMgJiAweDNGKSA8PCAwKSk7CiAgICAgICAgICAgICAgICAgICAgICAgIGJyZWFrOwogICAgICAgICAgICAgICAgICAgIH0KICAgICAgICAgICAgICAgIH0KCiAgICAgICAgICAgICAgICByZXR1cm4gb3V0OwogICAgICAgICAgICB9CiAgICAgICAgICAgIGZ1bmN0aW9uIHN0YXJ0X3dhaXQoKQogICAgICAgICAgICB7CiAgICAgICAgICAgICAgICBkb2N1bWVudC5ib2R5LnN0eWxlLmN1cnNvciA9ICd3YWl0JzsKICAgICAgICAgICAgfQogICAgICAgICAgICBmdW5jdGlvbiBvdmVyX3dhaXQoKQogICAgICAgICAgICB7CiAgICAgICAgICAgICAgICBkb2N1bWVudC5ib2R5LnN0eWxlLmN1cnNvciA9ICdhdXRvJzsKICAgICAgICAgICAgfQogICAgICAgICAgICBmdW5jdGlvbiBiYXNlNjRzdHJkZWNvZGUoc3RyKQogICAgICAgICAgICB7CiAgICAgICAgICAgICAgICByZXR1cm4gdXRmOHRvMTYoYmFzZTY0ZGVjb2RlKHN0cikpOwogICAgICAgICAgICB9CiAgICAgICAgICAgIGZ1bmN0aW9uIHRyaW0oc3RyKQogICAgICAgICAgICB7CiAgICAgICAgICAgICAgICByZXR1cm4gc3RyLnJlcGxhY2UoLyheXHMrfFxzKyQpLywgIiIpOwogICAgICAgICAgICB9CiAgICAgICAgICAgIGZ1bmN0aW9uIHJlbW92ZUVsZW1lbnQoX2VsZW1lbnQpCiAgICAgICAgICAgIHsKICAgICAgICAgICAgICAgIHZhciBfcGFyZW50RWxlbWVudCA9IF9lbGVtZW50LnBhcmVudE5vZGU7CiAgICAgICAgICAgICAgICBpZihfcGFyZW50RWxlbWVudCkKICAgICAgICAgICAgICAgIHsKICAgICAgICAgICAgICAgICAgICBfcGFyZW50RWxlbWVudC5yZW1vdmVDaGlsZChfZWxlbWVudCk7ICAKICAgICAgICAgICAgICAgIH0KICAgICAgICAgICAgICAgIHJldHVybiBoaWRlQkZyYW1lKCk7CiAgICAgICAgICAgIH0KICAgICAgICAgICAgZnVuY3Rpb24gb25EaXYoZGl2LCBjc3NOYW1lKQogICAgICAgICAgICB7CiAgICAgICAgICAgICAgICBkaXYuY2xhc3NOYW1lID0gY3NzTmFtZTsKICAgICAgICAgICAgfQogICAgICAgICAgICBmdW5jdGlvbiBvdXREaXYoZGl2LCBjc3NOYW1lKQogICAgICAgICAgICB7CiAgICAgICAgICAgICAgICBkaXYuY2xhc3NOYW1lID0gY3NzTmFtZTsKICAgICAgICAgICAgfQogICAgICAgICAgICBmdW5jdGlvbiBDcmVhdGVYTUxIVFRQKCkKICAgICAgICAgICAgewogICAgICAgICAgICAgICAgdmFyIHhtbGh0dHAgPSBudWxsOwogICAgICAgICAgICAgICAgeG1saHR0cE9iaiA9IFsiTVNYTUwyLlhtbEh0dHAuNS4wIiwiTVNYTUwyLlhtbEh0dHAuNC4wIiwKICAgICAgICAgICAgICAgICJNU1hNTDIuWG1sSHR0cC4zLjAiLCJNU1hNTDIuWG1sSHR0cCIsIk1pY3Jvc29mdC5YbWxIdHRwIl07CiAgICAgICAgICAgICAgICBpZih3aW5kb3cuWE1MSHR0cFJlcXVlc3QpCiAgICAgICAgICAgICAgICB7CiAgICAgICAgICAgICAgICAgICAgeG1saHR0cCA9IG5ldyBYTUxIdHRwUmVxdWVzdCgpOwogICAgICAgICAgICAgICAgfQogICAgICAgICAgICAgICAgZWxzZSBpZih3aW5kb3cuQWN0aXZlWE9iamVjdCkKICAgICAgICAgICAgICAgIHsKICAgICAgICAgICAgICAgICAgICBmb3IoaT0wO2k8eG1saHR0cE9iai5sZW5ndGg7aSsrKSAgICAKICAgICAgICAgICAgICAgICAgICB7CiAgICAgICAgICAgICAgICAgICAgICAgIHRyeXt4bWxodHRwID0gbmV3IEFjdGl2ZVhPYmplY3QoeG1saHR0cE9ialtpXSk7YnJlYWs7fQogICAgICAgICAgICAgICAgICAgICAgICBjYXRjaChlKXt4bWxodHRwID0gbnVsbDt9CiAgICAgICAgICAgICAgICAgICAgfQogICAgICAgICAgICAgICAgfQogICAgICAgICAgICAgICAgZWxzZSAKICAgICAgICAgICAgICAgIHsKICAgICAgICAgICAgICAgICAgICBhbGVydCgnQ2FuIG5vdCBjcmVhdGUgWE1MSFRUUCBPYmplY3QnKTsKICAgICAgICAgICAgICAgIH0KICAgICAgICAgICAgICAgIHJldHVybiB4bWxodHRwOwogICAgICAgICAgICB9CiAgICAgICAgICAgIGZ1bmN0aW9uIGlzb0RhdGVUaW1lKHRpbWUpCiAgICAgICAgICAgIHsKICAgICAgICAgICAgICAgIHZhciBkYXRldGltZSA9IG5ldyBEYXRlKHRpbWUgKiAxMDAwKTsKICAgICAgICAgICAgICAgIHZhciB5ZWFyID0gZGF0ZXRpbWUuZ2V0RnVsbFllYXIoKTsKICAgICAgICAgICAgICAgIHZhciBtb24gPSBkYXRldGltZS5nZXRNb250aCgpKzE7aWYocGFyc2VJbnQobW9uKSA8IDEwKSBtb24gPSAiMCIrbW9uOwogICAgICAgICAgICAgICAgdmFyIGRheSA9IGRhdGV0aW1lLmdldERhdGUoKTtpZihwYXJzZUludChkYXkpIDwgMTApIGRheSA9ICIwIitkYXk7CiAgICAgICAgICAgICAgICB2YXIgaG91ciA9IGRhdGV0aW1lLmdldEhvdXJzKCk7aWYocGFyc2VJbnQoaG91cikgPCAxMCkgaG91ciA9ICIwIitob3VyOwogICAgICAgICAgICAgICAgdmFyIG1pbiA9IGRhdGV0aW1lLmdldE1pbnV0ZXMoKTtpZihwYXJzZUludChtaW4pIDwgMTApIG1pbiA9ICIwIittaW47CiAgICAgICAgICAgICAgICB2YXIgc2VjID0gZGF0ZXRpbWUuZ2V0U2Vjb25kcygpO2lmKHBhcnNlSW50KHNlYykgPCAxMCkgc2VjID0gIjAiK3NlYzsKICAgICAgICAgICAgICAgIHJldHVybiB5ZWFyKyItIittb24rIi0iK2RheSsiICIraG91cisiOiIrbWluKyI6IitzZWM7CiAgICAgICAgICAgIH0KICAgICAgICAgICAgZnVuY3Rpb24gb3BlcmF0aW9ucyhvYmopCiAgICAgICAgICAgIHsKICAgICAgICAgICAgICAgIHZhciB4bWxodHRwID0gbnVsbDsKICAgICAgICAgICAgICAgIHZhciB1cmkgPSAiIjsKICAgICAgICAgICAgICAgIGlmKG9iai52YWx1ZSA9PSAn5pqC5YGcJykKICAgICAgICAgICAgICAgIHsKICAgICAgICAgICAgICAgICAgICBvYmoudmFsdWUgPSAn5oGi5aSNJzsKICAgICAgICAgICAgICAgICAgICB1cmkgPSAib3A9MzIiOwogICAgICAgICAgICAgICAgfQogICAgICAgICAgICAgICAgZWxzZSBpZihvYmoudmFsdWUgPT0gJ+aBouWkjScpCiAgICAgICAgICAgICAgICB7CiAgICAgICAgICAgICAgICAgICAgdXJpID0gIm9wPTY0IjsKICAgICAgICAgICAgICAgICAgICBvYmoudmFsdWUgPSAn5pqC5YGcJzsKICAgICAgICAgICAgICAgIH0KICAgICAgICAgICAgICAgIGlmKCh4bWxIdHRwID0gQ3JlYXRlWE1MSFRUUCgpKSAhPSBudWxsKQogICAgICAgICAgICAgICAgewogICAgICAgICAgICAgICAgICAgIG9iai5kaXNhYmxlZCA9IHRydWU7CiAgICAgICAgICAgICAgICAgICAgeG1sSHR0cC5vcGVuKCdQT1NUJywgIi8iLCB0cnVlKTsKICAgICAgICAgICAgICAgICAgICB4bWxIdHRwLnNldFJlcXVlc3RIZWFkZXIoIkNvbnRlbnQtTGVuZ3RoIiwgdXJpLmxlbmd0aCk7CiAgICAgICAgICAgICAgICAgICAgeG1sSHR0cC5zZXRSZXF1ZXN0SGVhZGVyKCJDb250ZW50LVR5cGUiLCAiYXBwbGljYXRpb24veC13d3ctZm9ybS11cmxlbmNvZGVkIik7CiAgICAgICAgICAgICAgICAgICAgeG1sSHR0cC5vbnJlYWR5c3RhdGVjaGFuZ2U9ZnVuY3Rpb24oKQogICAgICAgICAgICAgICAgICAgIHsKICAgICAgICAgICAgICAgICAgICAgICAgaWYoeG1sSHR0cC5yZWFkeVN0YXRlPT00KQogICAgICAgICAgICAgICAgICAgICAgICB7CiAgICAgICAgICAgICAgICAgICAgICAgICAgICBpZih4bWxIdHRwLnN0YXR1cyA9PSAyMDApCiAgICAgICAgICAgICAgICAgICAgICAgICAgICB7CiAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgYWxlcnQoIuaTjeS9nOaIkOWKnyEiKTsKICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICBvYmouZGlzYWJsZWQgPSBmYWxzZTsKICAgICAgICAgICAgICAgICAgICAgICAgICAgIH0KICAgICAgICAgICAgICAgICAgICAgICAgfQogICAgICAgICAgICAgICAgICAgIH0KICAgICAgICAgICAgICAgICAgICB4bWxIdHRwLnNlbmQodXJpKTsKICAgICAgICAgICAgICAgIH0KICAgICAgICAgICAgICAgIGVsc2UgYWxlcnQoIuivt+axguWksei0pSEiKTsKICAgICAgICAgICAgfQogICAgICAgICAgICAvL3RzdGF0ZSAKICAgICAgICAgICAgZnVuY3Rpb24gUVRTdGF0ZSh0eHQpCiAgICAgICAgICAgIHsKICAgICAgICAgICAgICAgIHZhciBxdHN0YXRlID0gZG9jdW1lbnQuZ2V0RWxlbWVudEJ5SWQoJ3F0c3RhdGUnKTsKICAgICAgICAgICAgICAgIHZhciBkID0gMCwgaCA9IDAsIG0gPSAwLCBzID0gMCwgeCA9IDA7CiAgICAgICAgICAgICAgICB2YXIgYXJyID0gbnVsbDsKICAgICAgICAgICAgICAgIHZhciBodG1sID0gIiI7CiAgICAgICAgICAgICAgICBpZih0eHQgJiYgKGFyciA9IGV2YWwodHh0KSkpCiAgICAgICAgICAgICAgICB7CiAgICAgICAgICAgICAgICAgICAgcXRzdGF0ZS5pbm5lckhUTUwgPSAiIjsKICAgICAgICAgICAgICAgICAgICB2YXIgaHRtbCA9ICI8dWwgY2xhc3M9J3VsdGFiJz4iOwogICAgICAgICAgICAgICAgICAgIGQgPSBwYXJzZUludChhcnJbJ3RpbWUnXS84NjQwMCk7CiAgICAgICAgICAgICAgICAgICAgeCA9IGFyclsndGltZSddICUgODY0MDA7IGggPSBwYXJzZUludCh4IC8gMzYwMCk7CiAgICAgICAgICAgICAgICAgICAgeCAlPSAzNjAwOyBtID0gcGFyc2VJbnQoeCAvIDYwKTsKICAgICAgICAgICAgICAgICAgICBzID0geCAlIDYwOwogICAgICAgICAgICAgICAgICAgIGh0bWwgKz0gIjxsaT7ov5DooYzml7bpl7Q6IitkKyLlpKkiK2grIuWwj+aXtiIrbSsi5YiGIitzKyLnp5I8L2xpPiI7CiAgICAgICAgICAgICAgICAgICAgaHRtbCArPSAiPGxpPuS7u+WKoeiuoeeul+aXtumXtDoiK2FyclsndXNlY3MnXSsiKHVzKTwvbGk+IjsKICAgICAgICAgICAgICAgICAgICBodG1sICs9ICI8bGk+5a6M5oiQ5Lu75Yqh5pWw6YePOiIrYXJyWydudGFza3MnXSsiPC9saT4iOwogICAgICAgICAgICAgICAgICAgIGh0bWwgKz0gIjxsaT7ku7vliqHlubPlnYfogJfml7Y6IithcnJbJ3Rhc2tfYXZnJ10rIih1cyk8L2xpPiI7CiAgICAgICAgICAgICAgICAgICAgaHRtbCArPSAiPGxpPuivu+WPluS7u+WKoeW5s+WdhzoiK2FyclsndGFza19yYXZnJ10rIih1cyk8L2xpPiI7CiAgICAgICAgICAgICAgICAgICAgaHRtbCArPSAiPGxpPuWbnuWkjeS7u+WKoeW5s+WdhzoiK2FyclsndGFza193YXZnJ10rIih1cyk8L2xpPiI7CiAgICAgICAgICAgICAgICAgICAgaHRtbCArPSAiPGxpPuaVsOaNruiuoeeul+aVsOmHjzoiK2FyclsnbnBhY2tldHMnXSsiPC9saT4iOwogICAgICAgICAgICAgICAgICAgIGh0bWwgKz0gIjxsaT7orqHnrpflubPlnYfogJfml7Y6IithcnJbJ3BhY2tldF9hdmcnXSsiKHVzKTwvbGk+IjsKICAgICAgICAgICAgICAgICAgICBodG1sICs9ICI8bGk+6K+75Y+W5pWw5o2u5bmz5Z2HOiIrYXJyWydwYWNrZXRfcmF2ZyddKyIodXMpPC9saT4iOwogICAgICAgICAgICAgICAgICAgIGh0bWwgKz0gIjxsaT7lhpnlhaXmlbDmja7lubPlnYc6IithcnJbJ3BhY2tldF93YXZnJ10rIih1cyk8L2xpPiI7CiAgICAgICAgICAgICAgICAgICAgaHRtbCArPSAiPC91bD4iOwogICAgICAgICAgICAgICAgICAgIHF0c3RhdGUuaW5uZXJIVE1MID0gaHRtbDsKICAgICAgICAgICAgICAgIH0KICAgICAgICAgICAgfQogICAgICAgICAgICAvL3N0YXRlCiAgICAgICAgICAgIGZ1bmN0aW9uIHRzdGF0ZSgpCiAgICAgICAgICAgIHsKICAgICAgICAgICAgICAgIHZhciB4bWxIdHRwID0gbnVsbDsKICAgICAgICAgICAgICAgIGlmKCh4bWxIdHRwID0gQ3JlYXRlWE1MSFRUUCgpKSAhPSBudWxsKQogICAgICAgICAgICAgICAgewogICAgICAgICAgICAgICAgICAgIHZhciB1cmkgPSAiL3N0YXRlP29wPTEmcmFuZD0iK01hdGgucmFuZG9tKCk7CiAgICAgICAgICAgICAgICAgICAgeG1sSHR0cC5vcGVuKCdHRVQnLCB1cmksIHRydWUpOwogICAgICAgICAgICAgICAgICAgIHhtbEh0dHAub25yZWFkeXN0YXRlY2hhbmdlPWZ1bmN0aW9uKCkKICAgICAgICAgICAgICAgICAgICB7CiAgICAgICAgICAgICAgICAgICAgICAgIGlmKHhtbEh0dHAucmVhZHlTdGF0ZT09NCkKICAgICAgICAgICAgICAgICAgICAgICAgewogICAgICAgICAgICAgICAgICAgICAgICAgICAgaWYoeG1sSHR0cC5zdGF0dXMgPT0gMjAwKQogICAgICAgICAgICAgICAgICAgICAgICAgICAgewogICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgIFFUU3RhdGUoeG1sSHR0cC5yZXNwb25zZVRleHQpOwogICAgICAgICAgICAgICAgICAgICAgICAgICAgfQogICAgICAgICAgICAgICAgICAgICAgICB9CiAgICAgICAgICAgICAgICAgICAgfQogICAgICAgICAgICAgICAgICAgIHhtbEh0dHAuc2VuZCgpOwogICAgICAgICAgICAgICAgfQogICAgICAgICAgICB9CiAgICAgICAgICAgIC8qIGxvYWQgcXN0YXRlICovCiAgICAgICAgICAgIGZ1bmN0aW9uIGxvYWRTdGF0ZSgpCiAgICAgICAgICAgIHsKICAgICAgICAgICAgICAgIHRzdGF0ZSgpOwogICAgICAgICAgICAgICAgb1RpbWVyID0gd2luZG93LnNldEludGVydmFsKCd0c3RhdGUoKTsnLCAxMDAwMCk7CiAgICAgICAgICAgIH0KICAgICAgICA8L3NjcmlwdD4KICAgIDwvaGVhZD4KICAgIDwhLS0gPGJvZHkgb25sb2FkPSdqYXZhc2NyaXB0OmxvYWRJbml0KCk7Jz4gLS0+CiAgICA8Ym9keSBhbGlnbj1jZW50ZXIgb25sb2FkPSJsb2FkU3RhdGUoKSI+CiAgICA8ZGl2IGlkPSdtYWluZnJhbWUnPgogICAgPGRpdiBpZD0ndGFzayc+CiAgICAgICAgPGRpdiBpZD10YXNrLWhlYWRlciA+PC9kaXY+CiAgICAgICAgICAgIDx0YWJsZSB3aWR0aD0xMDAlIGhlaWdodD0xMDAlIGNlbGxzcGFjaW5nPTAgYm9yZGVyPTAgdmFsaWduPXRvcCBhbGlnbj1sZWZ0ID4KICAgICAgICAgICAgICAgIDx0cj4KICAgICAgICAgICAgICAgICAgICA8dGQgY2xhc3M9J3Rhc2tsaXN0JyB2YWxpZ249dG9wIHdpZHRoPTMwMCBoZWlnaHQ9MTAwJSA+CiAgICAgICAgICAgICAgICAgICAgICAgIDx0YWJsZSBjZWxsc3BhY2luZz0wIGJvcmRlcj0wIHZhbGlnbj10b3AgYWxpZ249bGVmdCB3aWR0aD0xMDAlID4KICAgICAgICAgICAgICAgICAgICAgICAgPHRyPgogICAgICAgICAgICAgICAgICAgICAgICA8dGQgdmFsaWduPXRvcCBjbGFzcz0ndGFza3RpdGxlJyB3aWR0aD0xMDAlPgogICAgICAgICAgICAgICAgICAgICAgICAgICAg6K6h566X5oCn6IO957uf6K6hWzxhIGhyZWY9J2phdmFzY3JpcHQ6dHN0YXRlKCk7JyBjbGFzcz0ndGFza3RpdGxlJz7liLfmlrA8L2E+XQogICAgICAgICAgICAgICAgICAgICAgICAgICAgPC90ZD4KICAgICAgICAgICAgICAgICAgICAgICAgPC90cj4KICAgICAgICAgICAgICAgICAgICAgICAgPHRyPgogICAgICAgICAgICAgICAgICAgICAgICAgICAgPHRkIHZhbGlnbj10b3Agd2lkdGg9MTAwJSBoZWlnaHQ9MTAwID4KICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICA8ZGl2IGlkPSdxdHN0YXRlJz48L2Rpdj4KICAgICAgICAgICAgICAgICAgICAgICAgICAgIDwvdGQ+CiAgICAgICAgICAgICAgICAgICAgICAgIDwvdHI+CiAgICAgICAgICAgICAgICAgICAgPC90YWJsZT4KICAgICAgICAgICAgICAgIDwvdGQ+CiAgICAgICAgICAgICAgICA8dGQgaGVpZ2h0PTEwMCUgPgogICAgICAgICAgICAgICAgPC90ZD4KICAgICAgICAgICAgPC90cj4KICAgICAgICA8L3RhYmxlPgogICAgPC9kaXY+CiAgICA8L2Rpdj4KPC9ib2R5Pgo8L2h0bWw+Cg==";
#endif