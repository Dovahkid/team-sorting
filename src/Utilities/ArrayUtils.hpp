#pragma once

#include <iostream>
#include <random>

using std::cout;
using std::endl;
using std::random_device;
using std::mt19937;

namespace ArrayUtils {

    enum RandomModes { FULL_RANDOM, MOSTLY_SORTED, REVERSE_SORTED, DUPLICATES};

    struct UtilStruct {
        int size; 
        int max;
        RandomModes mode;
    };

    /*
        Prototypes
    */
    int* randomFillArray(int max, int size);
    int* randomFillArray( UtilStruct );
    void printArray(int* arr, int size);
    void swap(int *arr, int loc1, int loc2);

    /*
        Implementations
    */
    void swap(int *arr, int loc1, int loc2) {
        int temp = arr[loc1];
        arr[loc1] = arr[loc2];
        arr[loc2] = arr[loc1];
    }

    int* randomFillArray(int max, int size) {
        int *arr{new int[size]{}};
        random_device rd;
        mt19937 gen(rd());

        for(int i = 0; i < size; i++) {
            arr[i] = gen() % (max+1);
        }
        
        return arr;
    }

    int* randomFillArray(UtilStruct settings) {
        int *arr{new int[settings.size]{}};
        random_device rd;
        mt19937 gen(rd());
        int randomNum;
        int randomDuplicates;

        switch(settings.mode) {
            
            case MOSTLY_SORTED:
                randomNum = gen() % (settings.max+1);
                for(int i = 0; i < settings.size; i++) {
                    arr[i] = randomNum++;
                }
                swap(arr, 0, settings.size-1);
            break;
            
            case REVERSE_SORTED:
                randomNum = gen() % (settings.max+1);
                for(int i = 0; i < settings.size; i++) {
                    arr[i] = randomNum--;
                }
            break;
            
            case DUPLICATES:
                randomNum = gen() % (settings.max+1);
                randomDuplicates = gen() % (settings.size%3);
                for(int i = 0; i < settings.size; i++) {
                    for (int j = 0; j < randomDuplicates && i + j < settings.size; j++) {
                        arr[i] = randomNum;
                        i++;
                    }
                }
            break;

            case FULL_RANDOM:
            default:
                for(int i = 0; i < settings.size; i++) {
                    arr[i] = gen() % (settings.max+1);
                }
            break;
        }

        return arr;
    }

    void printArray(int* arr, int size) {
        for(int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
}