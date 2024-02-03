// Copyright 2023 Vu Nguyen
// Merge function implemented by Vu Nguyen
// Print function implemented by bhipp
#include"pointerproblemfunctions.h"
#include<iostream>
using std::cout;
using std::endl;
#include<iomanip>
using std::setw;

// do not modify the implementation of the Print function
void Print(const SortedDynamicArray * nums) {
  for ( int i = 0; i < nums->size; ++i )
  cout << setw(4) << nums->values[i];
  cout << endl;
}
// Merge function takes 2 sorted arrays to merge them into one
// param: 2 SortedDynamicArray variables represent as the 2 arrays
void Merge(SortedDynamicArray * const arr1,
                    const SortedDynamicArray* const arr2) {
    int size1 = arr1->size, size2 = arr2->size;
    int totalSize = size1 + size2;
    int* mergedValues = new int[totalSize];
    int i = 0, j = 0, k = 0;
    // Compare and put the values from the 2 arrays into the merged one
    while (i < size1 && j < size2) {
        if (arr1->values[i] < arr2->values[j]) {
            mergedValues[k++] = arr1->values[i++];
        } else if (arr2->values[j] < arr1->values[i]) {
            mergedValues[k++] = arr2->values[j++];
        } else {
            mergedValues[k++] = arr1->values[i++];
            j++;
        }
    }
    // Copy the rest of the first array to the merged one
    while (i < size1) {
        mergedValues[k++] = arr1->values[i++];
    }
    // Copy the rest of the second array to the merged one
    while (j < size2) {
        mergedValues[k++] = arr2->values[j++];
    }
    // Clear up memory on the first array
    delete[] arr1->values;
    // Update the values to the first array
    arr1->values = mergedValues;
    arr1->size = k;
}
