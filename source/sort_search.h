#ifndef SORT_SEARCH_H
#define SORT_SEARCH_H

#include "global.h" // Mengambil definisi struct Paket dari global.h

// --- PROTOTIPE FUNGSI SORTING ---
// Mengurutkan array paket menggunakan Insertion Sort
void insertionSortPaket(Paket arr[], int n);

// Mengurutkan array paket menggunakan Merge Sort
void mergeSortPaket(Paket arr[], int l, int r);

// --- PROTOTIPE FUNGSI SEARCHING ---
// Mencari paket berdasarkan Resi (menggunakan Binary Search - Array harus terurut)
int binarySearchPaket(Paket arr[], int n, string targetResi);

// Mencari paket berdasarkan Nama Pengirim (menggunakan Linear Search)
int linearSearchPaket(Paket arr[], int n, string targetNama);

#endif