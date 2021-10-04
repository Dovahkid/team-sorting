#pragma once

void merge(int *arr, int low, int mid, int high);
void mergeSort(int *arr, int low, int high);


void merge(int *arr, int low, int mid, int high) {
    int i, j, k;
    int U[high-low+1];

    i = low; j = mid+1; k = 0;
    while(i <= mid && j <= high) {
        if(arr[i] < arr[j]) {
            U[k] = arr[i];
            k++;
            i++;
        } else {
            U[k] = arr[j];
            k++;
            j++;
        }
    }

    while(j <= high){
        U[k] = arr[j];
        j++;
        k++;
    }
    while(i <= mid){
        U[k] = arr[i];
        i++;
        k++;
    }

    for(int a = low; a <= high; a++) {
        arr[a] = U[a-low];
    }
}

void mergeSort(int *arr, int low, int high) {
    int mid;
    
    if(low < high) {
        mid = (low+high)/2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}