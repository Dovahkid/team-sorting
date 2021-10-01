void insertionSort(int arr[], int length) {
    int i, j, key;
    bool reverseSorted = true;

    for(int a = 0; a < length-1; a++) {
        if(!(arr[a] > arr[a+1]))
            reverseSorted = false;
    }

    if(reverseSorted) {
        for(int a = 0; a < length/2; a++) {
            int temp = arr[a];
            arr[a] = arr[length-a-1];
            arr[length-a-1] = temp;
        }
        
    }
    else {
        for (i = 1; i < length; i++) {
            j = i;
            while (j > 0 && arr[j - 1] > arr[j]) {
                key = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = key;
                j--;
            }
        }
    }
}