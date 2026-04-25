#ifndef SORT_SEARCH_H
#define SORT_SEARCH_H
#include "global.h"

// Sorting: Mengurutkan array paket berdasarkan berat atau prioritas
void insertionSortPaket(Paket arr[], int n);
void mergeSortPaket(Paket arr[], int l, int r);

// Searching: Mencari data di dalam array yang sudah tersortir
int binarySearchPaket(Paket arr[], int n, string targetResi);
int linearSearchPaket(Paket arr[], int n, string targetNama);

#endif