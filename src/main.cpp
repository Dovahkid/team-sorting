/*
    How to compile:
    g++ src/main.cpp
*/

#include <iostream>

// import tests
#include ".\Tests\bubbleSortTest.cpp"
#include ".\Tests\exchangeSortTest.cpp"
#include ".\Tests\heapSortTest.cpp"
#include ".\Tests\insertionSortTest.cpp"
#include ".\Tests\mergeSortTest.cpp"
#include ".\Tests\quickSortTest.cpp"
#include ".\Tests\selectionSortTest.cpp"

using namespace std;

// template<typename T>
// void print(T&& str) {
//     cout << str << endl;
// }

// template<typename T, typename ...Args>
// void print(T&& str, Args ...args) {
//     cout << str << " ";
//     print(args...);
// }

int main() {

    insertionSortTest();

    return 0;
}