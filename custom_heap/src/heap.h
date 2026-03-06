
#ifndef HEAP_H
#define HEAP_H

#include <stdint.h>
#include <stdlib.h>

typedef struct{
    uint32_t *arr;
    uint32_t capacity;
    uint32_t size;
}MinHeap;

MinHeap* create_heap(uint32_t _capacity);
void swap(uint32_t*a, uint32_t* b);
void bubble_up(MinHeap* _mh, uint32_t indx);
void bubble_down(MinHeap*_mh, uint32_t indx);
void insert_elm(MinHeap* _mh, uint32_t data);
void extract_elm(MinHeap* _mh);


#endif // HEAP_H
