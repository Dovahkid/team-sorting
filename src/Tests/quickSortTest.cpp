#include <iostream>
#include <iomanip>
#include "../Utilities/ArrayUtils.hpp"
#include "../Utilities/TimerUtils.hpp"
#include "../Algorithms/quickSort.hpp"

using namespace ArrayUtils;
using namespace TimerUtils;
using namespace std;

void quickSortTest(int allSize, int allMax) {
    
    RandomFillSettings randomFill { .size = allSize, .max = allMax, .mode = FULL_RANDOM }; // if youre using an error checker it will flag this line and similar lines as an error, just ignore that.
    RandomFillSettings duplicateFill { .size = allSize, .max = allMax, .mode = DUPLICATES };
    RandomFillSettings reverseFill { .size = allSize, .max = allMax, .mode = REVERSE_SORTED };
    RandomFillSettings mostlySortedFill { .size = allSize, .max = allMax, .mode = MOSTLY_SORTED };
}