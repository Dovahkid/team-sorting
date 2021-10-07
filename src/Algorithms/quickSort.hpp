#pragma once

void partition(int *arr, int low, int high, int& pivotpoint) {
    int i, j;
    int pivotitem;

    pivotitem = arr[low];
    j = low;
    for(i = low + 1; i <= high; i++) {
        if(arr[i] < pivotitem) {
            j++;
            ArrayUtils::swap(arr, i, j);
        }
    }
    pivotpoint = j;
    ArrayUtils::swap(arr, low, pivotpoint);
}

void quickSort(int *arr, int low, int high) {
    int pivotpoint;

    if(high > low) {
        partition(arr, low, high, pivotpoint);
        quickSort(arr, low, pivotpoint-1);
        quickSort(arr, pivotpoint+1, high);
    } 
}