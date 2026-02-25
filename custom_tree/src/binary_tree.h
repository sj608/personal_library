
#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>


typedef struct Node{
    int value;
    struct Node* left;
    struct Node* right;
}Node;

Node* create_node(int value);
Node* insert_node(Node* _root, int value);
void in_oreder_search(Node* _root);
void pre_order_search(Node* _root);
void post_order_search(Node* _root);
Node* search_node(Node* _root, int value);
Node* find_min(Node* _root);
Node* delete_node(Node* _root, int value);



#endif // BINARY_TREE_H
