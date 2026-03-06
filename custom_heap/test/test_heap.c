

#include "unity.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_heap_insert(void)
{
    // srand(time(NULL));
    MinHeap* heap;
    uint32_t cap = 32;
    heap = create_heap(cap);
    uint32_t heapified_nums[8] = {8,22,15,60,75,20,40,30};
    for(int i = 0; i<8; i++){
        insert_elm(heap, heapified_nums[i]);
        printf("Item in the heap: ");
        for(int j = 0; j<heap->size; j++){
            printf("%d ", heap->arr[j]);
        }
        printf("\n\n");
    }
    insert_elm(heap, 16);
    printf("Item in the heap: ");
    for(int j = 0; j<heap->size; j++){
        printf("%d ", heap->arr[j]);
    }
    printf("\n\n");
}



void test_heap_extract(void)
{
    // srand(time(NULL));
    MinHeap* heap;
    uint32_t cap = 32;
    heap = create_heap(cap);
    uint32_t heapified_nums[8] = {8,22,15,60,75,20,40,30};
    for(int i = 0; i<8; i++){
        insert_elm(heap, heapified_nums[i]);
        printf("Item in the heap: ");
        for(int j = 0; j<heap->size; j++){
            printf("%d ", heap->arr[j]);
        }
        printf("\n\n");
    }

    for(int i = 0; i<8; i++){
        extract_elm(heap);
        printf("Item in the heap: ");
        for(int j = 0; j<8; j++){
            printf("%d ", heap->arr[j]);
        }
        printf("\n\n");
    }
}

