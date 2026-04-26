#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include "global.h"

// Menambahkan paket ke antrean (Push)
void tambahPaket(NodeLL* &head, Paket data);

// Menghapus/Memproses paket dari antrean (Pop)
void prosesPaket(NodeLL* &head);

// Menampilkan semua antrean
void tampilkanAntrean(NodeLL* head);

#endif