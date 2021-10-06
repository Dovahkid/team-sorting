// int* getCopy(int *arr, int size);

// struct ArrayStorage {

//     int *random;
//     int *mostly_sorted;
//     int *duplicate;
//     int *reverse;
//     int size;
//     int max;

//     ArrayStorage(int s, int m){
//         using ArrayUtils::RandomFillSettings;

//         RandomFillSettings randomFill { .size = allSize, .max = allMax, .mode = FULL_RANDOM }; // if youre using an error checker it will flag this line and similar lines as an error, just ignore that.
//         RandomFillSettings duplicateFill { .size = allSize, .max = allMax, .mode = DUPLICATES };
//         RandomFillSettings reverseFill { .size = allSize, .max = allMax, .mode = REVERSE_SORTED };
//         RandomFillSettings mostlySortedFill { .size = allSize, .max = allMax, .mode = MOSTLY_SORTED };

//         random = { randomFillArray( randomFill ) };
//         duplicate = { randomFillArray( duplicateFill ) };
//         reverse = { randomFillArray( reverseFill ) };
//         mostly_sorted = { randomFillArray( mostlySortedFill ) };

//     }

//     ArrayStorage(ArrayStorage& other) {

//         random = getCopy(other.random, other.size);
//         mostly_sorted = getCopy(other.mostly_sorted, other.size);
//         duplicate = getCopy(other.duplicate, other.size);
//         reverse = getCopy(other.reverse, other.size);
//         size = other.size;
//         max = other.max;
//     }
// };

// int* getCopy(int *arr, int size) {
//     int copy[size];

//     for(int i = 0; i < size; i++)
//         copy[i] = arr[i];
    
//     return copy;
// }