#pragma once

#include <iostream>
#include <memory>
#include <random>
using namespace std;

namespace ArrayUtils 
{
    
    int* randomFillArray(int max, int size);

    /* Runs through the array printing to the terminal*/
    void printArray(int* arr, int size);

    int* randomFillArray(int max, int size) {
        random_device rd;
        int *arr{new int[size]{}};

        mt19937 gen(rd());

        for(int i = 0; i < size; i++) {
            arr[i] = gen() % (max+1);
        }
        
        return arr;
    }

    void printArray(int* arr, int size) {
        for(int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
}