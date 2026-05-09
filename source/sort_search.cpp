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

void merge(Paket arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    Paket L[100], R[100];

    for (int i = 0; i < n1; i++) L[i] = arr[l + i];
    for (int j = 0; j < n2; j++) R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2) {
        if (L[i].berat <= R[j].berat) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }

    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void mergeSortPaket(Paket arr[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        mergeSortPaket(arr, l, m);
        mergeSortPaket(arr, m + 1, r);
        merge(arr, l, m, r);
    }
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