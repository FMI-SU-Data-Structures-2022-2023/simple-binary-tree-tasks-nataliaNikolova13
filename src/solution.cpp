#include "solution.h"


int countElements(Node* tree){
    if (!tree){
        return 0;
    }
    return 1 + countElements(tree->left) + countElements(tree->right);
}

int countLeafs(Node* tree){
    if (!tree){
        return 0;
    }
    if(!tree->left && !tree->right){
        return 1;
    }
    return 1 + countLeafs(tree->left) + countLeafs(tree->right);
}

int height(Node* tree){
    if (!tree){
        return 0;
    }
    return 1 + (std::max(height(tree->left), height(tree->right)));
    }

int sumElements(Node* tree) {
    if(!tree){
        return 0;
    }
    return tree->key + sumElements(tree->left) + sumElements(tree->right);
}

int sumElementsAtLevel(Node* tree, unsigned level) {
    if(!tree){
        return 0;
    }
    if(level == 0){
        return tree->key;
    }
    return sumElementsAtLevel(tree->left, level - 1) + sumElementsAtLevel(tree->right, level - 1);
}

bool isSymmetric(Node* tree) {
    return false;
}

bool isBST(Node* tree) {
    return false;
}