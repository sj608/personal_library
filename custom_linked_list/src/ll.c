
#include "ll.h"

void insert_node_end(Node* head, int data)
{
    Node* temp_1 = (Node*)malloc(sizeof(Node));
    temp_1->data=data;
    temp_1->next = NULL;
    while(head->next != NULL){
        head = head->next;
    }
    head->next = temp_1;
}

Node* insert_node_head(Node* head, int data)
{
    Node* temp_1 = (Node*)malloc(sizeof(Node));
    temp_1->data=data;
    temp_1->next = head;

    return temp_1;
}

Node* delet_node(Node* head, int data)
{
    Node *prev = NULL, *current = head;
    
    while(current != NULL){
        // value found
        if(current->data == data){
            // delete at the head
            if(prev == NULL){
                // new head should be the next node
                head = current->next;
            }else{
                // delete in the middle, prev should connect to the current next
                prev->next = current->next;
            }
            free(current);
            return head;
        }
        prev = current;
        current = current->next;
    }
    return head;
}
