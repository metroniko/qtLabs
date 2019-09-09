#include "binarysearchtree.h"
//#include "Node.h"
#include <QDebug>

BinarySearchTree::BinarySearchTree()
{

}

void BinarySearchTree::insert(int value)
{
    bool finded = false;

    if(!this->root) {
        Node* temp = new Node();
        temp->key = value;
        temp->left = nullptr;
        temp->right = nullptr;
        this->root = temp;

    } else {
        Node* tempNode = this->root;
        while(!finded) {
            if( value < tempNode->key ) {
               if(!tempNode->left) {
                   tempNode->left = new Node();
                   tempNode->left->key = value;
                   return;
               } else {
                 tempNode = tempNode->left;
               }

            } else {
                if( value > tempNode->key ) {
                    if(!tempNode->right) {

                        tempNode->right = new Node();
                        tempNode->right->key = value;
                        return;
                    } else {
                        tempNode = tempNode->right;
                    }

                }

            }

        }

    }
}

bool BinarySearchTree::find(int value)
{
    bool finded = false;
    Node* tempNode = root;
    if(tempNode->key == value) {
        return true;
    }
//    tempNode->left != nullptr && tempNode->right != nullptr
    while(finded) {
        if( value <= tempNode->left->key) {
            if(value == tempNode->left->key) {
                finded = true;
            }
            tempNode = tempNode->left;
        } else {
            if( value >= tempNode->right->key) {
                if(value == tempNode->right->key) {
                    finded =  true;
                }
                tempNode = tempNode->right;
            }
        }

    }
    return  finded;
}

