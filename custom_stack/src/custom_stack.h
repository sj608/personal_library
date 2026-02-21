
#ifndef CUSTOM_STACK_H
#define CUSTOM_STACK_H

#include <stdint.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 256

typedef struct{
    int top;
    int stack[MAX_STACK_SIZE];
} Stack;

Stack* init_stack();
int push_stack(Stack* _s, int data);
int pop_stack(Stack* _s);
void free_stack(Stack* _s);

#endif // CUSTOM_STACK_H
