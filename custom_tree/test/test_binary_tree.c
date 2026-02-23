
#include "unity.h"

#include <stdio.h>
#include "binary_tree.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_build_and_print_in_order(void)
{
    Node* tree_root;
    tree_root = NULL;
    int item[10] = {4,1,3,2,6,9,7,5,8,10};
    for(int i = 0; i<10; i++){
        tree_root = insert_node(tree_root, item[i]);
    }
    in_oreder_search(tree_root);
}

void test_build_and_print_pre_order(void)
{
    Node* tree_root;
    tree_root = NULL;
    int item[10] = {4,1,3,2,6,9,7,5,8,10};
    for(int i = 0; i<10; i++){
        tree_root = insert_node(tree_root, item[i]);
    }
    pre_order_search(tree_root);
}

void test_build_and_print_post_order(void)
{
    Node* tree_root;
    tree_root = NULL;
    int item[10] = {4,1,3,2,6,9,7,5,8,10};
    for(int i = 0; i<10; i++){
        tree_root = insert_node(tree_root, item[i]);
    }

    printf("\n\n\npost order search\n");
    post_order_search(tree_root);
}
