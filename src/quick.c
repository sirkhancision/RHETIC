#include "../include/quick.h"

/* Code modified from GeeksForGeeks */
/* A utility function to swap two elements */
void swap(short unsigned int *a, short unsigned int *b) {
  short unsigned int t = *a;
  *a = *b;
  *b = t;
}

/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
short unsigned int partition(short unsigned int arr[], short unsigned int low,
                             short unsigned int high) {
  short unsigned int pivot = arr[high]; /* pivot */
  short unsigned int i = (low - 1);     /* Index of smaller element */
  short unsigned int j;

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
void quicksort(short unsigned int arr[], short unsigned int low,
               short unsigned int high) {
  if (low < high) {
    /* pi is partitioning index, arr[p] is now
       at right place */
    short unsigned int pi = partition(arr, low, high);

    /* Separately sort elements before */
    /* partition and after partition */
    quicksort(arr, low, pi - 1);
    quicksort(arr, pi + 1, high);
  }
}
