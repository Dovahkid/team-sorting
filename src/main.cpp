#include <iostream>
#include "./Utilities/ArrayUtils.hpp"

using namespace std;
using namespace ArrayUtils;

int main() {

    int *arr_random{randomFillArray({.size = 10, .max = 10})};
    int *arr_mostly{randomFillArray({.size = 10, .max = 10, .mode = MOSTLY_SORTED})};
    int *arr_duplicate{randomFillArray({.size = 10, .max = 10, .mode = DUPLICATES})};
    int *arr_reverse{randomFillArray({.size = 10, .max = 10, .mode = REVERSE_SORTED})};

    cout << "Full Random: "; printArray(arr_random,10);
    cout << "Mostly Sorted: "; printArray(arr_mostly,10);
    cout << "Duplicates: "; printArray(arr_duplicate,10);
    cout << "Reverse Sorted: "; printArray(arr_reverse,10);

    return 0;
}