#pragma once

int exchangeSortCompares = 0;
int exchangeNumberOfSwaps = 0;

void exchangeSort(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        for(int j = (1+i); j < size; j++) {
            exchangeSortCompares++;
            if(arr[i] > arr[j]) {
                exchangeNumberOfSwaps++;
                ArrayUtils::swap(arr,i,j);
            }
        }
    }
}