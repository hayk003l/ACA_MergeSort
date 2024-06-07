#include "MergeSort.hpp"

void merge(int* arr, const unsigned int& left, const unsigned int& mid, const unsigned int& right) {
    int leftSubbarray = left;
    int rightSubbarray = mid + 1;
    int tempArray = left;

    int temp[right + 1] = {};

    while (leftSubbarray <= mid && rightSubbarray <= right) {

        if (arr[leftSubbarray] <= arr[rightSubbarray]) {
            temp[tempArray] = arr[leftSubbarray];
            leftSubbarray++;
            tempArray++;
        }
        else {
            temp[tempArray] = arr[rightSubbarray];
            rightSubbarray++;
            tempArray++;
        }
    }

    while (leftSubbarray <= mid) {
        temp[tempArray] = arr[leftSubbarray];
        leftSubbarray++;
        tempArray++;
    }
    
    while (rightSubbarray <= right) {
        temp[tempArray] = arr[rightSubbarray];
        rightSubbarray++;
        tempArray++;
    }

    for (int i = left; i <= right; ++i) {
        arr[i] = temp[i];
    }
    
    
}

void mergeSort(int* arr, const unsigned int& left, const unsigned int& right) {

    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

