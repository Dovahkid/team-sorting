// This file shows how to use the ArrayUtils
// Import it with a relative path.
// Because the Utilities folder is on the same 
// level as the Tests folder, you must put .. before the first / to go up a level
//
// Then use the namespace ArrayUtils to call 
//   each function

#include <iostream>
#include "../Utilities/ArrayUtils.hpp" // This shows how to go up a level and then navigate to the ArrayUtils folder

using namespace std;


int example_main() {

    int *arr{ArrayUtils::randomFillArray(10,10)};

    ArrayUtils::printArray(arr,10);

    return 0;
}