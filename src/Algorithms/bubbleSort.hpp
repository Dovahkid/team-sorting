void bubbleSort(int arr[], int n) {
    bool notSorted = true;
    int i, j, temp;
    while(notSorted) {
        for(i = 0; i < n; i++) {
            for(j = 0; j < n-i-1; j++) {
                if(arr[j] > arr[j+1]) {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        notSorted = false;
    }
}    