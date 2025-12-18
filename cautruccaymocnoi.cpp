#include <iostream>
using namespace std;

struct Tree {
    int data;
    Tree* left;
    Tree* right;
};

Tree* makenode(int x) {
    Tree* node = new Tree;
    node->data = x;
    node->left = NULL;
    node->right = NULL;
    return node;
}

bool emptytree(Tree* root) {
    return root == NULL;
}


void themLeft(Tree*& root, int x) {
    if (root == NULL)
        root = makenode(x);
    else
        root->left = makenode(x);
}


void themRight(Tree*& root, int x) {
    if (root == NULL)
        root = makenode(x);
    else
        root->right = makenode(x);
}


void duyetTruoc(Tree* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    duyetTruoc(root->left);
    duyetTruoc(root->right);
}


void duyetGiua(Tree* root) {
    if (root == NULL) return;
    duyetGiua(root->left);
    cout << root->data << " ";
    duyetGiua(root->right);
}


void duyetSau(Tree* root) {
    if (root == NULL) return;
    duyetSau(root->left);
    duyetSau(root->right);
    cout << root->data << " ";
}

int main() {
    Tree* root = NULL;

    root = makenode(1);
    themLeft(root, 2);
    themRight(root, 3);
    themLeft(root->left, 4);
    themRight(root->left, 5);
    cout << "Duyet truoc: ";
    duyetTruoc(root);
    cout << "\nDuyet giua: ";
    duyetGiua(root);
    cout << "\nDuyet sau: ";
    duyetSau(root);

    return 0;
}