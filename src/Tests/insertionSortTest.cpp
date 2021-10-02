#include <iostream>
#include <iomanip>
#include "..\Utilities\ArrayUtils.hpp"
#include "..\Algorithms\insertionSort.hpp"
#include "..\Utilities\timerUtility.hpp"

using namespace ArrayUtils;
using namespace TimerUtils;
using namespace std;

void insertionSortTest() {


    RandomFillSettings randomFill { .size = 10000, .max = 10000, .mode = FULL_RANDOM };
    RandomFillSettings duplicateFill { .size = 10000, .max = 10000, .mode = DUPLICATES };
    RandomFillSettings reverseFill { .size = 10000, .max = 10000, .mode = REVERSE_SORTED };
    RandomFillSettings mostlySortedFill { .size = 10000, .max = 10000, .mode = MOSTLY_SORTED };

    int *arr_random{ randomFillArray( randomFill ) };
    int *arr_duplicate{ randomFillArray( duplicateFill ) };
    int *arr_reverse{ randomFillArray( reverseFill ) };
    int *arr_mostlySorted{ randomFillArray( mostlySortedFill ) };

    // cout << "Before sort" << endl;
    // cout << "Random Fill: "; printArray(arr_random, randomFill.size);
    // cout << "Duplicate Fill: "; printArray(arr_duplicate, duplicateFill.size);
    // cout << "Reverse Fill: "; printArray(arr_reverse, reverseFill.size);
    // cout << "Mostly Filled Fill: "; printArray(arr_mostlySorted, mostlySortedFill.size);

    cout << "Full Random sort ";
    timer([arr_random, randomFill]()->void{
        insertionSort(arr_random, randomFill.size);
        });

    cout << "Duplicate random sort ";
    timer([arr_duplicate, duplicateFill]()->void{
        insertionSort(arr_duplicate, duplicateFill.size);
        });

    cout << "Reverse random sort ";
    timer([arr_reverse, reverseFill]()->void{
        insertionSort(arr_reverse, reverseFill.size);
        });

    cout << "Mostly sorted random sort ";
    timer([arr_mostlySorted, mostlySortedFill]()->void{
        insertionSort(arr_mostlySorted, mostlySortedFill.size);
        });

    // cout << "\nAfter sort" << endl;
    // cout << "Random Fill: "; printArray(arr_random, randomFill.size);
    // cout << "Duplicate Fill: "; printArray(arr_duplicate, duplicateFill.size);
    // cout << "Reverse Fill: "; printArray(arr_reverse, reverseFill.size);
    // cout << "Mostly Sorted Fill: "; printArray(arr_mostlySorted, mostlySortedFill.size);

}