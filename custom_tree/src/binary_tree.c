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

Node* search_node(Node* _root, int value)
{
    if(_root != NULL && _root->value == value){
        return _root;
    }
    if(_root->value < value){
        return search_node(_root->right, value);
    }else{
        return search_node(_root->left, value);
    }
}

Node* find_min(Node* _root)
{
    while(_root && _root->left != NULL){
        _root = _root->left;
    }
    return _root;
}

Node* delete_node(Node* _root, int value)
{
    if(_root == NULL){
        return _root;
    }
    if(_root->value < value){
        _root->right = delete_node(_root->right, value);
    }else if (_root->value > value){
        _root->left = delete_node(_root->left, value);
    }else{
        // case 1 no child
        if(_root->left == NULL && _root->right == NULL){
            free(_root);
            _root = NULL;
            return _root;
        }
        // case 2 one child
        if(_root->left == NULL && _root->right != NULL){
            Node* temp = _root->right;
            free(_root);
            _root = NULL;
            return temp;
        }
        if(_root->right == NULL && _root->left != NULL){
            Node* temp = _root->left;
            free(_root);
            return temp;
        }
        // case 3 two child
        Node* temp = find_min(_root->right);
        _root->value = temp->value;
        _root->right = delete_node(_root->right, temp->value);
    }
    return _root;
}
