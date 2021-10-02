# Team Project - Sorting Algorithms

This repo is for CSC-2710 Team Project 1.
The goal is to write and test 7 different sorting algorithms. Bubble, exchange, heap, insertion, merge, quick, and selection sort.


## File organization

Files are organized in the src folder into 3 sub folders. These folders being Algorithms, Tests, and Utilities. 
The main.cpp is not in any subfolder but is in the src folder.

### Algorithms folder

This folder contains the code for all of the algorithms. These files are .hpp header files.

### Tests folder

This folder contains the tests for each of the 7 algorithms. The tests will use 4 different types of data sets.
Full random, Duplicate random, Reverse sorted, and Mostly Sorted random. (Info about these data sets is found in the utilities section.)
Then these arrays are passed to the insertionSort function that is passed to the timer function. (Info about timer in utilities section.)
The time it took for each algorithm to run on the different data sets will be printed to the screen.

### Utilities

This folder contains the ArrayUtils and TimerUtils

#### ArrayUtils

ArrayUtils contains functions such as two overloaded randomFillArray, printArray, and swap

The overloaded randomFillArray functions are for generating the randomData sets.
The first randomFillArray only takes in size and max and returns a full random array.
The overload of the function takes in a struct object called RandomFillSettings, though this struct can be ignored as it can be passed anonymously if you want.
The struct has 3 values; size, max, and mode.
Size is how large the array is, max is how big the values of the array can be, and mode is an enum which has each of the data set types.
The enum's types are FULL_RANDOM, MOSTLY_SORTED, REVERSE_SORTED, DUPLICATES.

An example of how to use this function would be
```cpp
int *arr {randomFillArray( {.size = 10, .max = 10, .mode = DUPLICATES} )};

// or the struct can be defined on its own
RandomFillSettings duplicate_settings {.size = 10, .max = 10, .mode = DUPLICATES};
int *arr {randomFillArray( duplicate_settings )};

```

The default of the overloaded function is FULL_RANDOM so passing this mode is optional
```cpp
int *arr {randomFillArray( {.size = 10, .max = 10} )};
```

#### TimerUtils

