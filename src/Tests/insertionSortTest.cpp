#include <iostream>
#include <iomanip>
#include "..\Utilities\ArrayUtils.hpp"
#include "..\Algorithms\insertionSort.hpp"

using namespace ArrayUtils;
using namespace std;

void insertionSortTest() {


    RandomFillSettings randomFill { .size = 10, .max = 10 };
    RandomFillSettings duplicateFill { .size = 10, .max = 10, .mode = DUPLICATES };
    RandomFillSettings reverseFill { .size = 10, .max = 10, .mode = REVERSE_SORTED };
    RandomFillSettings mostlySortedFill { .size = 10, .max = 10, .mode = MOSTLY_SORTED };

    int *arr_random{ randomFillArray( randomFill ) };
    int *arr_duplicate{ randomFillArray( duplicateFill ) };
    int *arr_reverse{ randomFillArray( reverseFill ) };
    int *arr_mostlySorted{ randomFillArray( mostlySortedFill ) };

    cout << "Before sort" << endl;
    cout << "Random Fill: "; printArray(arr_random, randomFill.size);
    cout << "Duplicate Fill: "; printArray(arr_duplicate, duplicateFill.size);
    cout << "Reverse Fill: "; printArray(arr_reverse, reverseFill.size);
    cout << "Mostly Filled Fill: "; printArray(arr_mostlySorted, mostlySortedFill.size);


    insertionSort(arr_random, randomFill.size);
    insertionSort(arr_duplicate, duplicateFill.size);
    insertionSort(arr_reverse, reverseFill.size);
    insertionSort(arr_mostlySorted, mostlySortedFill.size);

    cout << "\nAfter sort" << endl;
    cout << "Random Fill: "; printArray(arr_random, randomFill.size);
    cout << "Duplicate Fill: "; printArray(arr_duplicate, duplicateFill.size);
    cout << "Reverse Fill: "; printArray(arr_reverse, reverseFill.size);
    cout << "Mostly Sorted Fill: "; printArray(arr_mostlySorted, mostlySortedFill.size);

}