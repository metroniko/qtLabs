#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H
#include "Node.h"


class BinarySearchTree
{
public:
    BinarySearchTree();
    void insert(int value);
    bool find(int value);

private:
    Node* root{};
};

#endif // BINARYSEARCHTREE_H
