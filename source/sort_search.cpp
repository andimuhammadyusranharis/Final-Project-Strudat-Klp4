#include "sort_search.h"

void insertionSortPaket(Paket arr[], int n) {
    for (int i = 1; i < n; i++) {
        Paket key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j].prioritas > key.prioritas) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void mergeSortPaket(Paket arr[], int l, int r) {
    // KODE AKAN DIKERJAKAN OLEH ILHAM
}

int binarySearchPaket(Paket arr[], int n, string targetResi) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

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

int linearSearchPaket(Paket arr[], int n, string targetNama) {
    // KODE AKAN DIKERJAKAN OLEH ILHAM
    return -1;
}