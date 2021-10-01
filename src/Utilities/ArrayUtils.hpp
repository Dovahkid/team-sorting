#pragma once

#include <iostream>
#include <random>

using std::cout;
using std::endl;
using std::random_device;
using std::mt19937;

namespace ArrayUtils {

    // RandomModes for overloaded randomFillArray
    enum RandomModes { FULL_RANDOM, MOSTLY_SORTED, REVERSE_SORTED, DUPLICATES};

    // RandomFillSettings used for overloaded randomFillArray
    struct RandomFillSettings {
        int size; 
        int max;
        RandomModes mode;
    };

    /*
        Prototypes
    */
    int* randomFillArray(int max, int size);
    int* randomFillArray( RandomFillSettings );
    void printArray(int* arr, int size);
    void swap(int *arr, int loc1, int loc2);

    /*
        Implementations
    */

   // Swaps two values in passed array. Swaps at loc1 and loc2
    void swap(int *arr, int loc1, int loc2) {
        int temp = arr[loc1];
        arr[loc1] = arr[loc2];
        arr[loc2] = arr[loc1];
    }


    // default randomFillArray that takes in a max value for each item and the size of the array
    int* randomFillArray(int max, int size) {
        int *arr{new int[size]{}};
        random_device rd;
        mt19937 gen(rd());

        for(int i = 0; i < size; i++) {
            arr[i] = gen() % (max+1);
        }
        
        return arr;
    }

    // RandomFillArray that takes in a RandomFillSettings has its only parameter
    // This makes it a bit clearer when passing in all the settings for the function
    int* randomFillArray(RandomFillSettings settings) {
        int *arr{new int[settings.size]{}};
        random_device rd;
        mt19937 gen(rd());
        int randomNum;
        int randomDuplicates;

        switch(settings.mode) {
            
            // Creates a mostly sorted array by choosing a random number then 
            // subtracting 1 from it till the array is full. It then swaps the 
            // first and last valyue in the array
            case MOSTLY_SORTED: 
                randomNum = gen() % (settings.max+1);
                for(int i = 0; i < settings.size; i++) {
                    arr[i] = randomNum++;
                }
                swap(arr, 0, settings.size-1);
            break;
            
            // Creates a reverse sorted array by picking a random number 
            // then subtracting one from it until the array is sorted
            case REVERSE_SORTED:
                randomNum = gen() % (settings.max+1);
                for(int i = 0; i < settings.size; i++) {
                    arr[i] = randomNum--;
                }
            break;
            
            // Creates an array with many duplicates by chooosing a number
            // and choosing an amount to duplicate it by
            // then it places that value in the array that many times
            case DUPLICATES:
                randomNum = gen() % (settings.max+1);
                randomDuplicates = gen() % (settings.size%3);
                for(int i = 0; i < settings.size; i++) {
                    for (int j = 0; j < randomDuplicates && i + j < settings.size; j++) {
                        arr[i] = randomNum;
                        i++;
                    }
                    randomDuplicates = gen() % ( settings.size % 6 );
                    randomNum = gen() % (settings.max+1);
                }
            break;

            // Fully random, nothing special here
            // This is the default or can be passed in but has same result
            case FULL_RANDOM:
            default:
                for(int i = 0; i < settings.size; i++) {
                    arr[i] = gen() % (settings.max+1);
                }
            break;
        }

        return arr;
    }

    // Prints array by running through it
    void printArray(int* arr, int size) {
        for(int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
}