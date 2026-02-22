
#include "unity.h"

#include "ll.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_insert_node_end(void)
{
    Node head;
    int cnt = 0;
    head.data = 123;
    head.next = NULL;
    insert_node_end(&head, 433);
    insert_node_end(&head, 2123);
    insert_node_end(&head, 235);
    while(head.next != NULL){
        printf("%dth Node: data %d \n", cnt, head.data);
        head = *(head.next);
        cnt++;
    }
    printf("%dth Node: data %d \n", cnt, head.data);
}

void test_insert_node_head(void)
{
    Node* head = (Node*)malloc(sizeof(Node));
    int cnt = 0;
    head->data = 123;
    head->next = NULL;
    insert_node_end(head, 433);
    insert_node_end(head, 2123);
    insert_node_end(head, 235);
    
    Node* temp = head;

    while(temp != NULL){
        printf("%dth Node: data %d \n", cnt, temp->data);
        temp = temp->next;
        cnt++;
    }

    head = insert_node_head(head, 4551);
    temp = head;
    cnt =0;
    while(temp != NULL){
        printf("%dth Node: data %d \n", cnt, temp->data);
        temp = temp->next;
        cnt++;
    }
}

void test_delet_node(void)
{
    Node* head = (Node*)malloc(sizeof(Node));
    int cnt = 0;
    head->data = 123;
    head->next = NULL;
    insert_node_end(head, 433);
    insert_node_end(head, 2123);
    insert_node_end(head, 235);

    head = delet_node(head, 45678);

    printf("\n\n\nDelete Node Prints\n");

    Node* temp = head;
    cnt =0;
    while(temp != NULL){
        printf("%dth Node: data %d \n", cnt, temp->data);
        temp = temp->next;
        cnt++;
    }

}