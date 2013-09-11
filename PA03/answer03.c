
#include "pa03.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Read a file of integers.
 *
 * Arguments:
 *
 * filename: the name of a file that contains a list of integers (one
 * per line)
 * 
 * numberOfIntegers: pointer to store the number of integers in the
 * file. You need to update the value stored at the address which is
 * the pointer's value
 *
 * Returns:
 *
 * a array of integers from the file, or NULL if *any* error is
 * encountered.
 *
 * You do NOT know how many integers are in the file until you have
 * read it. Once you know how many integers there are, you can modify
 * the "numberOfIntegers" variable. (Note that this is a pointer, not
 * an integer) You must allocate memory to store the integers.
 * 
 * Once memory is allocated to store the integers, you will need to
 * re-read the values from the file. To do this, you must reset the
 * file pointer to the beginning of the file using the function
 * "fseek".
 * 
 * You should not use rewind (if you have learned it somewhere).  The
 * difference of rewind and fseek is that rewind does not tell you
 * whether it fails.  
 *
 * One way to read integeres is to use the "fscanf" function.  It is
 * easier than reading one character at a time by using fgetc.
 *
 * You must use malloc in this function.
 * 
 * Some old books encourage readers to type cast in front of malloc,
 * something like
 *
 * int * ptr = (int *) malloc(sizeof(int) * size);
 *
 * Type cast is no longer needed and in fact is discouraged now.  You
 * should *NOT* type cast malloc.  It is discouraged even though it is
 * not wrong.
 *
 * The allocated memory will be released in pa03.c. You do not need to
 * worry about releasing memory.
 *
 * You will receive zero if you allocate a large array whose size is
 * independent of the number of integers in the file.  For example, if
 * you write this
 *
 * int array[10000];
 * 
 *
 */

int * readIntegers(const char * filename, int * numberOfIntegers)
{
  int number = 1;
  int *arr;
  FILE* fptr = fopen(filename,"r");
  int val;
  if(fptr == NULL)
    {
      return NULL;
    }
    while(fscanf(fptr , "%d" , & val) == 1)
    {
      number++;
      }
  number--;
  *numberOfIntegers = number;
  arr = malloc(number * sizeof(int));
  number = 0;
  fseek(fptr , 0 , SEEK_SET);
  while(fscanf(fptr , "%d" , & val) == 1)
    {
      arr[number] = val;
      number++;
    }
  fclose(fptr);
  return arr;
  
}

/**
 * Sort an (ascending) array of integers
 *
 * Arguments:
 * arr    The array to search
 * length Number of elements in the array
 *
 * Uses "quicksort" to sort "arr".  Use the first element of the array
 * as the pivot.  
 *
 * Your solution MUST use recursive function (or functions)
 * 
 * quicksort works in the following way: 
 * 
 * find an element in the array (this element is called the
 * pivot). 
 *
 * rearrange the array's elements into two parts: the part smaller
 * than this pivot and the part greater than this pivot; make the pivot
 * the element between these two parts
 * 
 * sort the first and the second parts separately by repeating the 
 * procedure described above
 * 
 * You will receive no point if you use any other sorting algorithm.
 * You cannot use selection sort, merge sort, or bubble sort.
 * 
 * Some students are fascinated by the name of bubble sort.  In
 * reality, bubble sort is rarely used because it is slow.  It is a
 * mystery why some students (or even professors) like bubble sort.
 * Other than the funny name, bubble sort has nothing special and is
 * inefficient, in both asymptotic complexity and the amount of data
 * movement.  There are many algorithms much better than bubble sort.
 * You would not lose anything if you do not know (or forget) bubble
 * sort.
 *
 */
void sort(int * arr, int length)
{
  void quicksort(int *,int,int);
  int low = 0;
  int high = length - 1;
  
  quicksort(arr , low , high);
}

void quicksort(int arr[] , int low , int high)
{
  void sorthelp(int * , int , int);

  int pivot = arr[low];
  int left = low + 1;
  int right = high;
  
  while(left < right)
    {
      while(left < right && arr[right] <= pivot)
	{
	  left--;
	}
      while(left < right && arr[left] >= pivot)
	{
	  right++;
	}
      if(left < right)
	{
	  sorthelp(arr , left , right);
	}
    }
  if(arr[low] > arr[left])
    {
      sorthelp(arr , low , left);
      quicksort(arr , low , left - 1);
      quicksort(arr , left + 1, right);
    }
  else
    {
      quicksort(arr , low + 1 , high);
    }
}
void sorthelp(int arr[] , int left , int right)
{
  int temp = arr[right];
  arr[right] = arr[left];
  arr[left] = temp;
}

 /**
 * Use binary search to find 'key' in a sorted array of integers
 *
 * Arguments:
 * 
 * arr The array to search. Must be sorted ascending.  You do not need
 *        to check. This array is from the result of your sort
 *        function. Make sure your sort function is correct before you
 *        start writing this function.
 *
 * length Number of elements in the array
 * key    Value to search for in arr
 *
 * Returns:
 * The index of 'key', or -1 if key is not found.
 *
 * Since the array is sorted, you can quickly discard many elements by
 * comparing the key and the element at the center of the array. If
 * the key is the same as this element, you have found the index.  If
 * the key is greater than this element, you can discard the first
 * half of the array.  If the key is smaller, you can discard the
 * second half of the array.  Now you have only half of the array to
 * search.  Continue this procedure until either you find the index or
 * it is impossible to find a match.
 * 
 * Your solution MUST use recursive function (or functions)
 *
 * Don't forget that arrays are 'zero-indexed'. Also, you must
 * use a binary search to pass this question.
 * 
 * You will receive no point if you do the following because it is not
 * binary search.  This is called linear search because it checks
 * every element.
 *
 * int ind;
 * for (ind = 0; ind < length; ind ++)
 * {
 *    if (arr[ind] == key)
 *    {
 *       return ind;
 *    }
 * }
 * return -1;
 */
int search(int * arr, int length, int key)
{
    return -1;
}


