#pragma once
#include "../Utilities/ArrayUtils.hpp"

void exchangeSort(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        for(int j = (1+i); j < size; j++) {
            if(arr[i] > arr[j]) {
                ArrayUtils::swap(arr,i,j);
            }
        }
    }
}