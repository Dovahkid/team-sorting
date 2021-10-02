#pragma once

void exchange(int *arr, int first, int second) {
    int temp = arr[second];
    arr[second] = arr[first];
    arr[first] = temp;
}

void exchangeSort(int *arr, int size) {
        for(int i = 0; i < size; i++) {
            for(int j = (1+i); j < size; j++) {
                if(arr[i] > arr[j]) {
                    exchange(arr, i, j);
                }
            }
        }
    }