/*
 * @file <stat.c>
 * @brief
 * analyze an array of int data items and report analytics:
 * _____________________________________________________
 * 1. the maximum.                                      |
 * 2. minimum.                                          |
 * 3. mean.                                             |
 * 4. median.                                           |
 * 5. reorder this data set from large to small.        |
 *______________________________________________________|
 * @author <Khaled Alaa Saleh>
 * @E-mail <khaled_alaa_saleh@hotmail.com>
 */

#include <stdlib.h>

#include <stdio.h>

#include "stats.h"

/*
int* creatMemory (int*,int);
int            creatArray  (int*,int);
int* copyArray   (int* ,int,int*);
int* sort_array   (int*,int,int);
void           print_array  (int*,int,char*);
int            find_maximum    (int*,int);
int            find_minimum    (int*,int);
int            find_mean   (int*,int);
float          find_median (int*,int);
void           print_statistics  (int*,int*,int,int,int,int,float);
*/

int main() {
  int mean, max, min;
  float median;
  int numberOfItems ;
  char name;
  int * unsortedArray = NULL;
  int * sortedArray = NULL;

printf("please enter the number of characters in the array:   ");

  scanf("%d", & numberOfItems);
  unsortedArray = creatMemory(unsortedArray, numberOfItems);
  creatArray(unsortedArray, numberOfItems);
  sortedArray = copyArray(unsortedArray, numberOfItems, sortedArray);
  sortedArray = sort_array(sortedArray, numberOfItems, 1); // use 1 for descending or 2 for ascending
  max = find_maximum(unsortedArray, numberOfItems);
  min = find_minimum(unsortedArray, numberOfItems);
  mean = find_mean(unsortedArray, numberOfItems);
  median = find_median(unsortedArray, numberOfItems);
  print_statistics(unsortedArray, sortedArray, numberOfItems, max, min, mean, median);
  //system("pause");
  return 0;
 }

// Memory Allocation Function.
// used to allocate specific number of specific data type in the memory.
/*-----------------------------------------------------------------------------*/
int * creatMemory(int * array, int n) {
  array = (int * ) malloc(n * sizeof(int));

  //  Check if the memory has been successfully allocated or not.
  if (array == NULL) {
    printf("Memory not allocated.\n");
    return (0);
  } else {
    printf("Allocating %d memory blocks of size %zu Byte.... .\n", n, n * (sizeof(int)));
    printf("Memory allocated successfully.\nStarted at Address : 0x%p.\n\n", array);
    return array;
  }
}
/*-----------------------------------------------------------------------------*/

// Creat Array Function.
// used to store the integers inside the array.
/*-----------------------------------------------------------------------------*/
int creatArray(int * array, int n) {
  //  Check if the array has been successfully allocated or not.
  if (array == NULL) {
    printf("Array Not Found.\n");
    return (0);
  } else {
    printf("please enter %d characters \"each followed by ENTER KEY\" : \n", n);

    for (int i = 0; i < n; i++) {
      scanf("%d", & array[i]);
      array[i] = (array[i]);
    }
    return (1);
  }
}
/*-----------------------------------------------------------------------------*/

// copy Array Function.
// used to copy array to new one.
/*-----------------------------------------------------------------------------*/
int * copyArray(int * array, int n, int * copiedArray) {
  //  Check if the array has been successfully allocated or not.
  if (array == NULL) {
    printf("Array Not Found.\n");
    return (NULL);
  } else {
    printf("now making a new copy of the array\n");
    copiedArray = creatMemory(array, n);
    for (int i = 0; i < n; i++) {
      copiedArray[i] = array[i];
    }
    return copiedArray;
  }
}
/*-----------------------------------------------------------------------------*/

// Print Array Function.
// used to Print the integers inside the array.
/*-----------------------------------------------------------------------------*/
void print_array(int * array, int n, char * name) {
  //  Check if the array has been successfully allocated or not.
  if (array == NULL) {
    printf("Array Not Found.\n");
  } else {
    printf("Array Name :  %s Array \n", name);
    printf("characters : ");
    for (int i = 0; i < n; i++) {
      printf("%d ", array[i]);
    }
    printf(".\n");
  }
}
/*-----------------------------------------------------------------------------*/

// Sort Array Function, using insert sorting algorism.
// used to sort the integers inside the array.
// type 1 for descending and type 2 for Ascending order.
/*-----------------------------------------------------------------------------*/
int * sort_array(int * array, int size, int type) {
  //  Check if the array has been successfully allocated or not.
  int * sortedArray = array;
  if (sortedArray == NULL) {
    printf("Array Not Found.\n");
  } else if (type == 1) {
    printf("now sorting the Array in Descending order.....\n");
  } else if (type == 2) {
    printf("now sorting the Array in Ascending order.....\n");
  }
  // insertion sorting code.
  //assume that The first element in the array to be sorted.
  for (int step = 1; step < size; step++) {
    int key = array[step]; //Take the second element and store it separately in key.
    int j = step - 1;
    // For Ascending order, change key>array[j] to key<array[j].
    while (type == 1 ? key > array[j] && j >= 0 : key < array[j] && j >= 0) {
      // if key > previous element, move previous element one step forward
      // if key < previous element, move previous element one step forward
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
  return sortedArray;
}
/*-----------------------------------------------------------------------------*/

// Find Maximum value.
/*-----------------------------------------------------------------------------*/
int find_maximum(int * array, int n) {
  //  Check if the array has been successfully allocated or not.
  if (array == NULL) {
    printf("Array Not Found.\n");
    return (0);
  } else {

    int max = array[0];
    for (int i = 0; i < n; i++) {
      if ((int) array[i] >= max) max = (int) array[i];
    }
    printf("the Maximum value is : %d . \n", max);
    return max;
  }
}
/*-----------------------------------------------------------------------------*/

// Find Minimum value.
/*-----------------------------------------------------------------------------*/
int find_minimum(int * array, int n) {
  //  Check if the array has been successfully allocated or not.
  if (array == NULL) {
    printf("Array Not Found.\n");
    return (0);
  } else {
    int min = array[0];
    for (int i = 0; i < n; i++) {
      if ((int) array[i] <= min) min = (int) array[i];
    }
    printf("the Minimum value is : %d . \n", min);
    return min;
  }
}
/*-----------------------------------------------------------------------------*/

// Find Mean value.
/*-----------------------------------------------------------------------------*/
int find_mean(int * array, int n) {
  //  Check if the array has been successfully allocated or not.
  if (array == NULL) {
    printf("Array Not Found.\n");
    return (0);
  } else {
    int sum = 0;
    int mean = 0;
    for (int i = 0; i < n; i++) {
      sum += (array[i]);
    }
    printf("The Sum of the values   : %d . \n", sum);
    mean = sum / n;
    printf("Mean value of the Array : %d . \n", mean);
    return mean;
  }
}
/*-----------------------------------------------------------------------------*/

// Find median value. (The "median" is the "middle" value in the list of numbers)
// to find the median you need to sort the list first from small to big.
/*-----------------------------------------------------------------------------*/
float find_median(int * array, int n) {
  //  Check if the array has been successfully allocated or not.
  if (array == NULL) {
    printf("Array Not Found.\n");
    return (0);
  } else {
    printf("Creating Array Copy ....\n");
    int * arrayCopy = NULL;
    arrayCopy = creatMemory(arrayCopy, n);
    arrayCopy = copyArray(array, n, arrayCopy);
    print_array(arrayCopy, n, "Copied");
    printf("Calculating the Median Value...\n");

    float median = 0;
    arrayCopy = sort_array(arrayCopy, n, 2);
    print_array(arrayCopy, n, "Ascending");

    if (n % 2 == 0) {
      printf("Middle values of the Array : %d , %d . \n", arrayCopy[(n / 2) - 1], arrayCopy[((n / 2))]);
      median = ((arrayCopy[(n / 2) - 1] + arrayCopy[((n / 2))]) / 2.0);
    } else {
      median = (float)(arrayCopy[(n / 2)]);
    }
    printf("The Median Value is : %.1f . \n", median);
    return median;
  }
}
/*-----------------------------------------------------------------------------*/

// Print stats of the Array.
/*-----------------------------------------------------------------------------*/
void print_statistics(int * array, int * sorted, int n, int max, int min, int mean, float median) {
  //  Check if the array has been successfully allocated or not.
  if (array == NULL) {
    printf("Array Not Found.\n");
  } else {
    printf("*********************************************\n");
    printf("The Array Stats :\n");
    printf("Number Of items : %d \n", n);
    printf("Array Items : \n");
    print_array(array, n, "Unsorted");
    printf("Array Items in Descending Order: \n");
    print_array(sorted, n, "Sorted");
    printf("MAX value : %d \n", max);
    printf("MIN value : %d \n", min);
    printf("MEAN value : %d \n", mean);
    printf("MEDIAN value : %.1f \n", median);
    printf("Thank You Very Much\n");
  }
}

/*-----------------------------------------------------------------------------*/
