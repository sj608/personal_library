
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

void test_search_node(void)
{
    Node* tree_root, *res;
    tree_root = NULL;
    int item[10] = {4,1,3,2,6,9,7,5,8,10};
    for(int i = 0; i<10; i++){
        tree_root = insert_node(tree_root, item[i]);
    }
    res = search_node(tree_root, 5);
    TEST_ASSERT_EQUAL_INT(5, res->value);
}

void test_find_min(void){
    Node* tree_root, *res;
    tree_root = NULL;
    int item[10] = {4,1,3,2,6,9,7,5,8,10};
    for(int i = 0; i<10; i++){
        tree_root = insert_node(tree_root, item[i]);
    }
    res = find_min(tree_root);
    TEST_ASSERT_EQUAL_INT(1, res->value);
}

void test_delet_node(void)
{
    Node* tree_root, *res;
    tree_root = NULL;
    int item[23] = {47, 23, 68, 12, 35, 56, 81, 5, 18, 29, 41, 51, 75, 88, 9, 26, 38, 62, 77, 92, 73, 71, 74};
    for(int i = 0; i<23; i++){
        tree_root = insert_node(tree_root, item[i]);
    }
    tree_root = delete_node(tree_root, 68);

    printf("\n\n\n after deletion\n");
    pre_order_search(tree_root);
}