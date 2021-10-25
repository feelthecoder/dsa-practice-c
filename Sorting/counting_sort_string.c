// Counting sort in C programming

#include <stdio.h>

void countingSort(int array[], int size) {
  int output[10],i;

  // Find the largest element of the array
  int max = array[0];
  for (i = 1; i < size; i++) {
    if (array[i] > max)
      max = array[i];
  }


  int count[10];

  for (i = 0; i <= max; ++i) {
    count[i] = 0;
  }


  for (i = 0; i < size; i++) {
    count[array[i]]++;
  }

  for (i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }

  for (i = size - 1; i >= 0; i--) {
    output[count[array[i]] - 1] = array[i];
    count[array[i]]--;
  }

  for (i = 0; i < size; i++) {
    array[i] = output[i];
  }
}


int main() {
  int array[] = {4, 2, 2, 8, 3, 3, 1},i;
  int n = sizeof(array) / sizeof(array[0]);
  countingSort(array, n);
  for (i = 0; i < n; ++i) 
    printf("%d  ", array[i]);
}
