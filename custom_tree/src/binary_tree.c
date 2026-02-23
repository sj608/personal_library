#include "binary_tree.h"

Node* create_node(int value)
{
    Node* root = (Node*)malloc(sizeof(Node));
    if(root == NULL){
        return NULL;
    }
    root->value = value;
    root->left = NULL;
    root->right = NULL;

    return root;
}

Node* insert_node(Node* _root, int value)
{
    if(_root == NULL){
        return create_node(value);
    }
    if(value < _root->value){
        _root->left = insert_node(_root->left, value);
    }else if( value > _root->value){
        _root->right = insert_node(_root->right, value);
    }
    return _root;
}

void in_oreder_search(Node* _root)
{
    if(_root == NULL){
        return; 
    }
    in_oreder_search(_root->left);
    printf("%d\n", _root->value);
    in_oreder_search(_root->right);
}

void pre_order_search(Node* _root)
{
    if(_root == NULL){
        return;
    }
    printf("%d\n", _root->value);
    pre_order_search(_root->left);
    pre_order_search(_root->right);
}

void post_order_search(Node* _root)
{
    if(_root == NULL){
        return;
    }
    post_order_search(_root->left);
    post_order_search(_root->right);
    printf("%d\n", _root->value);
}