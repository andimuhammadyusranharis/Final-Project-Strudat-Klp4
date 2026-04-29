#include "sort_search.h"
// 1. Binary Search (untuk mencari berdasarkan Resi)
int binarySearchPaket(Paket arr[], int n, string targetResi) {
    int left = 0, right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid].resi == targetResi) {
            return mid;
        } else if (arr[mid].resi < targetResi) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

// 2. Linear Search (untuk mencari berdasarkan nama pengirim)
int linearSearchPaket(Paket arr[], int n, string targetNama) {
    for (int i = 0; i < n; i++) {
        // Pastikan menggunakan .pengirim, sesuai dengan global.h
        if (arr[i].pengirim == targetNama) {
            return i;
        }
    }
    return -1;
}