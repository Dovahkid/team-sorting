/*
    How to compile:
    g++ src/main.cpp
*/

#include <iostream>

// import tests
#include "./Tests/bubbleSortTest.cpp"
#include "./Tests/exchangeSortTest.cpp"
#include "./Tests/heapSortTest.cpp"
#include "./Tests/insertionSortTest.cpp"
#include "./Tests/mergeSortTest.cpp"
#include "./Tests/quickSortTest.cpp"
#include "./Tests/selectionSortTest.cpp"

int main() {

    int size = 10000, max = 1000;

    bubbleSortTest(size, max); // This needs to be reviewed to see if its the algo from the book
    exchangeSortTest(size, max); // This needs to be reviewed to see if its the algo from the book
    insertionSortTest(size, max); // This needs to be reviewed to see if its the algo from the book
    selectionSortTest(size, max);
    mergeSortTest(size, max);
    quickSortTest(size, max);
    heapSortTest(size, max);

    return 0;
}
