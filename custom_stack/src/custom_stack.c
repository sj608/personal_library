
#include "custom_stack.h"

Stack* init_stack()
{
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->top = -1;

    return stack; 
}

int push_stack(Stack* _s, int data)
{
    //check if stack is full
    if(_s->top == MAX_STACK_SIZE-1){
        return -1;
    }
    _s->top += 1;
    _s->stack[_s->top] = data;
}

int pop_stack(Stack* _s)
{
    int data;
    // if top is less than 0, stack is empty
    if(_s->top < 0){
        return -1;
    }
    data = _s->stack[_s->top];
    _s->top -= 1;
    return data;
}

void free_stack(Stack* _s)
{
    free(_s);
}
