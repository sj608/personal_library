
#include "unity.h"

#include "custom_stack.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_init_stack(void)
{
    Stack* stack;
    stack = init_stack();
    TEST_ASSERT_EQUAL_INT(-1, stack->top);
}
void test_free_stack(void)
{
    Stack* stack;
    stack = init_stack();
    TEST_ASSERT_EQUAL_INT(-1, stack->top);
    free_stack(stack);
    stack = NULL;
    TEST_ASSERT_EQUAL_PTR(NULL, stack);
}

void test_pop_empty_stack(void)
{
    Stack* stack;
    stack = init_stack();
    TEST_ASSERT_EQUAL_INT(-1, stack->top);
    TEST_ASSERT_EQUAL_INT(-1, pop_stack(stack));
    free_stack(stack);
    stack = NULL;
}

void test_push_stack(void)
{
    Stack* stack;
    stack = init_stack();
    for(int i = 0; i < MAX_STACK_SIZE; i++){
        push_stack(stack, i);
        TEST_ASSERT_EQUAL_INT(i, stack->top);
    }
    free_stack(stack);
    stack = NULL;
}

void test_push_stack_full(void)
{
    Stack* stack;
    stack = init_stack();
    for(int i = 0; i < MAX_STACK_SIZE; i++){
        push_stack(stack, i);
        TEST_ASSERT_EQUAL_INT(i, stack->top);
    }
    TEST_ASSERT_EQUAL_INT(-1, push_stack(stack, 244));
    free_stack(stack);
    stack = NULL;
}