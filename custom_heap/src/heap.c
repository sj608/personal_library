
#include "heap.h"

MinHeap* create_heap(uint32_t _capacity)
{
    MinHeap* _heap = (MinHeap*)malloc(sizeof(MinHeap));
    if(_heap == NULL) return NULL;
    _heap->arr = (uint32_t*)malloc(sizeof(uint32_t)*_capacity);
    if(_heap->arr == NULL) return NULL;
    _heap->capacity = _capacity;
    _heap->size = 0;
    return _heap;
}

void swap(uint32_t* a, uint32_t* b)
{
    uint32_t temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_up(MinHeap* _mh, uint32_t indx)
{
    if(indx == 0) return;
    uint32_t parent_index = (indx-1)/2;
    if(_mh->arr[parent_index] > _mh->arr[indx]){
        swap(&(_mh->arr[parent_index]),&(_mh->arr[indx]));
        bubble_up(_mh, parent_index);
    }
}

void bubble_down(MinHeap*_mh, uint32_t indx)
{
    uint32_t left_child = 2*indx+1;
    uint32_t right_child = 2*indx+2;
    uint32_t smallest_inx = indx;
    if(left_child < _mh->size && _mh->arr[left_child] < _mh->arr[smallest_inx]){
        smallest_inx = left_child;
    }
    if(right_child < _mh->size && _mh->arr[right_child] < _mh->arr[smallest_inx]){
        smallest_inx = right_child;
    }
    if(smallest_inx != indx){
        swap(&(_mh->arr[smallest_inx]), &(_mh->arr[indx]));
        bubble_down(_mh, smallest_inx);
    }

}

void insert_elm(MinHeap* _mh, uint32_t data)
{
    // check if arr is full
    if(_mh->size == _mh->capacity){
        _mh->capacity *= 2;
        _mh->arr = (MinHeap*)realloc(_mh->arr, sizeof(uint32_t)*_mh->capacity);
    }
    // insert at the end and move up
    _mh->arr[_mh->size] = data;
    bubble_up(_mh, _mh->size);
    _mh->size += 1;
}

void extract_elm(MinHeap* _mh)
{
    // extract at the start and move down
    // _mh->arr[0] = _mh->arr[_mh->size-1];
    swap(&(_mh->arr[0]), &(_mh->arr[_mh->size-1]));
    _mh->size -= 1;
    bubble_down(_mh, 0);
}