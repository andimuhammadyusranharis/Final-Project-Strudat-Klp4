#include "linked_list.h"

// Fungsi untuk memproses antrian di belakang
void tambahPaket(NodeLL* &head, Paket data) {
    NodeLL* newNode = new NodeLL;
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        NodeLL* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    cout << "Paket berhasil ditambahkan ke antrean!\n";
}

void prosesPaket(NodeLL* &head) {
    // KODE AKAN DIKERJAKAN OLEH VERA
    // Implementasi penghapusan node di depan
}

void tampilkanAntrean(NodeLL* head) {
    // KODE AKAN DIKERJAKAN OLEH VERA
}