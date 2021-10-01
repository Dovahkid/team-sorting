#include <iostream>
#include "./Utilities/ArrayUtils.h"

using namespace std;

int main() {

    int *arr{ArrayUtils::randomFillArray(10,10)};

    ArrayUtils::printArray(arr,10);

    return 0;
}