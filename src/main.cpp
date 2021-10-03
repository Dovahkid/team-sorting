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

using namespace std;

int main() {

    bubbleSortTest(); // This needs to be reviewed to see if its the algo from the book
    exchangeSortTest(); // This needs to be reviewed to see if its the algo from the book
    // heapSortTest();
    insertionSortTest(); // This needs to be reviewed to see if its the algo from the book
    // mergeSortTest();
    // quickSortTest();
    selectionSortTest(); // This needs to be reviewed to see if its the algo from the book

    return 0;
}