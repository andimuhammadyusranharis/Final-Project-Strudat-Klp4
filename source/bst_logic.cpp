#include "bst_logic.h"

NodeBST* insertBST(NodeBST* root, Paket data) {
    // Posisi kosong → buat node baru 
    if (root == nullptr){
        NodeBST* baru = new NodeBST();
        baru->data = data;
        baru->left = nullptr;
        baru->right = nullptr;
        return baru;
    } 
    
    // Rekursi kiri atau kanan berdasarkan string resi 
    if (data.resi < root->data.resi){
        root->left = insertBST(root->left, data);
    } else if (data.resi > root->data.resi){
        root->right = insertBST(root->right, data);
    } else { 
        cout << "[!] Resi \"" << data.resi << "\" sudah ada!\n"; 
    }
    return root;
}

NodeBST* searchBST(NodeBST* root, string resi){

    // Tidak ketemu
    if(root == nullptr)
        return nullptr;

    // Ketemu
    if (resi == root->data.resi)
        return root;

    // Arahkan rekursi ke kiri atau kanan
    if (resi < root->data.resi){
        return searchBST(root->left, resi);
    } else{ 
        return searchBST(root->right, resi);
    }

    return nullptr;
}