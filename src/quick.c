#include "../include/quick.h"

/* Code modified from GeeksForGeeks */
/* A utility function to swap two elements */
static void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
static int partition(int arr[], int low, int high) {
    int pivot = arr[high]; /* pivot */
    int i = (low - 1); /* Index of smaller element */
    int j;

    for (j = low; j <= high - 1; j++) {
        /* If current element is smaller than the pivot */
        if (arr[j] < pivot) {
            i++; /* increment index of smaller element */
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);

    return (i + 1);
}

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quicksort(int arr[], int low, int high) {
    if (low < high) {
        /* pi is partitioning index, arr[p] is now
        at right place */
        int pi = partition(arr, low, high);

        /* Separately sort elements before */
        /* partition and after partition */
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}
