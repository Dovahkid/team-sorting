#include <iostream>
#include <iomanip>
#include "../Utilities/ArrayUtils.hpp"
#include "../Utilities/TimerUtils.hpp"
#include "../Algorithms/quickSort.hpp"


void quickSortTest(int allSize, int allMax) {
    using namespace ArrayUtils;
    using namespace TimerUtils;
    using namespace std;
    
    RandomFillSettings randomFill { .size = allSize, .max = allMax, .mode = FULL_RANDOM }; // if youre using an error checker it will flag this line and similar lines as an error, just ignore that.
    RandomFillSettings duplicateFill { .size = allSize, .max = allMax, .mode = DUPLICATES };
    RandomFillSettings reverseFill { .size = allSize, .max = allMax, .mode = REVERSE_SORTED };
    RandomFillSettings mostlySortedFill { .size = allSize, .max = allMax, .mode = MOSTLY_SORTED };

    int *arr_random{ randomFillArray( randomFill ) };
    int *arr_duplicate{ randomFillArray( duplicateFill ) };
    int *arr_reverse{ randomFillArray( reverseFill ) };
    int *arr_mostlySorted{ randomFillArray( mostlySortedFill ) };

    cout << "Before sort" << endl;
    cout << "Random Fill: "; printArray(arr_random, randomFill.size);
    cout << "Duplicate Fill: "; printArray(arr_duplicate, duplicateFill.size);
    cout << "Reverse Fill: "; printArray(arr_reverse, reverseFill.size);
    cout << "Mostly Sorted Fill: "; printArray(arr_mostlySorted, mostlySortedFill.size);

    cout << "\n<------= Quick Sort =------>" << endl;

    cout << "Full Random sort ";
    timer([arr_random, randomFill]()->void{
        quickSort(arr_random, 0, randomFill.size-1);
        });
    cout << "Compares: " << quickSortCompares << endl;
    quickSortCompares = 0;

    cout << "Duplicate random sort ";
    timer([arr_duplicate, duplicateFill]()->void{
        quickSort(arr_duplicate, 0, duplicateFill.size-1);
        });
    cout << "Compares: " << quickSortCompares << endl;
    quickSortCompares = 0;

    cout << "Reverse random sort ";
    timer([arr_reverse, reverseFill]()->void{
        quickSort(arr_reverse, 0, reverseFill.size-1);
        });
    cout << "Compares: " << quickSortCompares << endl;
    quickSortCompares = 0;

    cout << "Mostly sorted random sort ";
    timer([arr_mostlySorted, mostlySortedFill]()->void{
        quickSort(arr_mostlySorted, 0, mostlySortedFill.size-1);
        });
    cout << "Compares: " << quickSortCompares << endl;
    quickSortCompares = 0;

    cout << "<------=================------>" << endl;

    cout << "\nAfter sort" << endl;
    cout << "Random Fill: "; printArray(arr_random, randomFill.size);
    cout << "Duplicate Fill: "; printArray(arr_duplicate, duplicateFill.size);
    cout << "Reverse Fill: "; printArray(arr_reverse, reverseFill.size);
    cout << "Mostly Sorted Fill: "; printArray(arr_mostlySorted, mostlySortedFill.size);
}