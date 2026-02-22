
#ifndef LL_H
#define LL_H

#include <stdint.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
}Node;

void insert_node_end(Node* head, int data);
Node* insert_node_head(Node* head, int data);
Node* delet_node(Node* head, int data);

#endif // LL_H
