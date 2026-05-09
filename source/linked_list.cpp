#include "linked_list.h"

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
    if (head == nullptr) {
        cout << "Antrean kosong!\n";
        return;
    }

    NodeLL* temp = head;
    cout << "Memproses paket resi: " << temp->data.resi << endl;

    head = head->next;
    delete temp;
}

void tampilkanAntrean(NodeLL* head) {
    if (head == nullptr) {
        cout << "Antrean kosong!\n";
        return;
    }

    NodeLL* temp = head;
    while (temp != nullptr) {
        cout << "Resi: " << temp->data.resi
             << " | Pengirim: " << temp->data.pengirim
             << " | Tujuan: " << temp->data.tujuan
             << endl;
        temp = temp->next;
    }
}