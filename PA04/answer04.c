/*
 * Please fill the functions in this file.
 * You can add additional functions. 
 *
 * Hint: 
 * You can write additonal functions.
 * You can test your functions with your own input file.
 * See details in README or typing command ./pa04 in terminal after make.
 * See output format examples in any of the files in directory expected.
 * 
 * You may create additional arrays if needed.  The maximum size
 * needed is specified by MAXLENGTH in pa04.h.
 */

#include "pa04.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
 * =================================================================
 * This function prints all partitions of a positive integer value
 * For example, if the value is 3:
 *
 * partitionAll 3
 * = 1 + 1 + 1
 * = 1 + 2
 * = 2 + 1
 * = 3
 */


void partitionAll(int value)
{
  void partitionHelp(int * , int , int);
  printf("partitionAll %d\n", value);
    int * buffer = malloc(value * sizeof(int));
  partitionHelp(buffer , 0 , value);
  free(buffer);
}

void partitionHelp(int* arr , int pos , int value)
{
  void print_buffer(int * , int);
  if(value == 0)
    {
      print_buffer(arr , pos);
      return;
    }
  int index;
  for(index = 1;index <= value;index++)
    {
      arr[pos] = index;
      partitionHelp(arr , pos + 1, value - index);
    }
}

void print_buffer(int* arr , int length)
{
  int lcv;
  printf("= ");
  if(length > 0)
    {
      printf("%d" , arr[0]);
    }
  for(lcv = 1; lcv< length;lcv++)
    {
      printf(" + %d", arr[lcv]);
    }
  printf("\n");
}
/*
 * =================================================================
 * This function prints the partitions that use increasing values.
 *
 * For example, if value is 5
 * 2 + 3 and
 * 1 + 4 are valid partitions
 *
 * 5 is a valid partition
 * 
 * 1 + 1 + 3 and
 * 2 + 1 + 2 and
 * 3 + 2 are invalid partitions.
 * 
 * The program should generate only valid partitions.  Do not
 * generates invalid partitions and checks validity before printing.
 *
 */


void partitionIncreasing(int value)
{
  void partitionHelpIncrease(int * , int , int);
  printf("partitionIncreasing %d\n", value);
  int * buffer = malloc(value * sizeof(int));
  partitionHelpIncrease(buffer , 0 , value);
  free(buffer);
}
void partitionHelpIncrease(int* arr , int pos , int value)
{
  void print_buffer(int * , int);
  if(value == 0)
    {
      print_buffer(arr , pos);
      return;
    }
  int index;
  for(index = 1;index <= value;index++)
    {
      if(index > arr[pos - 1] || pos == 0)
	{
	  arr[pos] = index;
	  partitionHelpIncrease(arr , pos + 1, value - index);
	}
    }
}

/*
 * =================================================================
 * This function prints the partitions that use Decreasing values.
 *
 * For example, if value is 5
 * 3 + 2 and
 * 4 + 1 are valid partitions
 *
 * 5 is a valid partition
 * 
 * 1 + 1 + 3 and
 * 2 + 1 + 2 and
 * 2 + 3 are invalid partitions.
 * 
 * The program should generate only valid partitions.  Do not
 * generates invalid partitions and checks validity before printing.
 *
 */


void partitionDecreasing(int value)
{
  void partitionHelpDecrease(int *, int , int);
  printf("partitionDecreasing %d\n", value);
  int * buffer = malloc(value * sizeof(int));
  partitionHelpDecrease(buffer , 0 , value);
  free(buffer);
}
void partitionHelpDecrease(int* arr , int pos , int value)
{
  void print_buffer(int * , int);
  if(value == 0)
    {
      print_buffer(arr , pos);
      return;
    }
  int index;
  for(index = 1;index <= value;index++)
    {
      if(index < arr[pos - 1] || pos == 0)
	{
	arr[pos] = index;
	partitionHelpDecrease(arr , pos + 1, value - index);
	}
    }
} 

/*
 * =================================================================
 * This function prints odd number only partitions of a positive integer value
 * For example, if value is 5
 * 1 + 1 + 1 + 1 + 1 and
 * 1 + 3 + 1 are valid partitions
 *
 * 5 is a valid partition
 * 
 * 1 + 1 + 1 + 2 and
 * 2 + 1 + 2 and
 * 2 + 3 are invalid partitions.
 * 
 * The program should generate only valid partitions.  Do not
 * generates invalid partitions and checks validity before printing.
 */


void partitionOdd(int value)
{
  printf("partitionOdd %d\n", value);
    void partitionHelpOdd(int *, int , int);
  int * buffer = malloc(value * sizeof(int));
  partitionHelpOdd(buffer , 0 , value);
  free(buffer);
}
void partitionHelpOdd(int* arr , int pos , int value)
{
  void print_buffer(int * , int);
  if(value == 0)
    {
      print_buffer(arr , pos);
      return;
    }
  int index;
  for(index = 1;index <= value;index++)
    {
      if(index % 2 != 1)
	{
	}
      else
	{
	  arr[pos] = index;
	  partitionHelpOdd(arr , pos + 1, value - index);
	}
    }
}  

/*
 * =================================================================
 * This function prints even number only partitions of a positive integer value
 * For example, if value is 8
 * 2 + 2 + 2 + 2and
 * 2 + 4 + 2 are valid partitions
 *
 * 8 is a valid partition
 *
 * 2 + 1 + 1 + 2 + 2and
 * 2 + 1 + 2 + 3and
 * 5 + 3 are invalid partitions.
 *
 * if the value is 5, there will be no result generated
 * 
 * The program should generate only valid partitions.  Do not
 * generates invalid partitions and checks validity before printing.
 */

void partitionEven(int value)
{
  printf("partitionEven %d\n", value);
    void partitionHelpEven(int *, int , int);
  int * buffer = malloc(value * sizeof(int));
  partitionHelpEven(buffer , 0 , value);
  free(buffer);
}
void partitionHelpEven(int* arr , int pos , int value)
{
  void print_buffer(int * , int);
  if(value == 0)
    {
      print_buffer(arr , pos);
      return;
    }
  int index;
  for(index = 1;index <= value;index++)
    {
      if(index % 2 != 0)
	{
	}
      else
	{
	  arr[pos] = index;
	  partitionHelpEven(arr , pos + 1, value - index);
	}
    }
}

/*
 * =================================================================
 * This function prints alternate ood and even number partitions of a positive integer value. Each partition starts from and odd number, even number, ood number again, even number again...etc.
 *
 * For example, if value is 6
 * 1 + 2 + 1 + 2 and
 * 3 + 2 + 1 are valid partitions
 *
 * 6 is not a valid partition
 *
 * 2 + 1 + 1 + 2 and
 * 2 + 1 + 3and
 * 5 + 1 are invalid partitions.
 * 
 * The program should generate only valid partitions.  Do not
 * generates invalid partitions and checks validity before printing.
 */


void partitionOddAndEven(int value)
{
  printf("partitionOddAndEven %d\n", value);
  
}

/*
 * =================================================================
 * This function prints prime number only partitions of a positive integer value
 * For example, if value is 6
 * 2 + 2 + 2 and
 * 3 + 3 are valid partitions
 *
 * 6 is not a valid partition
 * 
 * 2 + 4 and
 * 1 + 5 are invalid partitions.
 * 
 * The program should generate only valid partitions.  Do not
 * generates invalid partitions and checks validity before printing.
 */



void partitionPrime(int value)
{
  printf("partitionPrime %d\n", value);

}
