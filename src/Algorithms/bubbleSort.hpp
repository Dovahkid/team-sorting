#pragma once

int bubbleSortCompares = 0;

void bubbleSort(int arr[], int n) {
    bool notSorted = true;
    int i, j, temp;
    while(notSorted) {
        for(i = 0; i < n; i++) {
            for(j = 0; j < n-i-1; j++) {
                bubbleSortCompares++;
                if(arr[j] > arr[j+1]) {
                    ArrayUtils::swap(arr, j, (j+1));
                }
            }
        }
        notSorted = false;
    }
}    