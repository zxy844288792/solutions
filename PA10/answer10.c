
#include "pa10.h"
#include "tree.h"
#include "tree.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

/**
 * Returns a pointer to a new empty stack.
 */
Stack * Stack_create()
{
  Stack * stack = malloc(sizeof(Stack));
  stack -> list = NULL;
  return stack;
}

/**
 * Frees all memory associated with the stack. 
 * Don't forget that you _must_ free the entire contained linked-list.
 * Also, you must safely to _nothing_ if stack == NULL. 
 */
void Stack_destroy(Stack * stack)
{
  if(stack == NULL)
    {
      return;
    }
  ListNode * li = stack -> list;
  while(li != NULL)
    {
      struct list_node_t * temp = li -> next;
      free(li);
      li = temp;
    }
  free(stack);
}

/**
 * Returns TRUE (something other than zero) if the stack is empty.
 */
int Stack_isEmpty(Stack * stack)
{
  if(stack -> list != NULL)
    {
      return FALSE;
    }
  return TRUE;
}

/**
 * Pop the front 'value' from the stack.
 *
 * More precisely, this function must do two things:
 * (1) Return the value of the head node of the stack's list
 * (2) Remove the head node of the stack's list, freeing it.
 */
int Stack_pop(Stack * stack)
{
  ListNode * li = stack -> list;
  int value = li -> value;
  stack -> list = li -> next;
  free(li);
  return value;
}

/**
 * Push an 'value' onto the front of the stack.
 *
 * More precisely, this function must:
 * (1) Create a new ListNode with 'value' for it's value.
 * (2) Push that new ListNode onto the front of the stack's list.
 */
void Stack_push(Stack * stack, int value)
{
  ListNode * new = malloc(sizeof(ListNode));
  new -> value = value;
  new -> next = stack -> list;
  stack -> list = new;
}

/**
 * Sort 'array' of length 'len' using Donald Knuth's "StackSort"
 *
 * To do this, you must implement the following pseudo-code:
 * (1) Maintain a 'write_index'. This is where you'll write values to
 *     as you sort them. It starts off as zero.
 * (2) Initialize an empty stack
 * (3) For each input value 'x':
 *     (3.a) While the stack is nonempty and 'x' is larger than the 
 *           front 'value' on the stack, pop 'value' and:
 *           (3.a.i) Write 'value' to array[write_index], and 
 *                   increment write_index.
 *     (3.b) Push x onto the stack.
 * (4) While the stack is nonempty, pop the front 'value' and follow
 *     step (3.a.i).
 *
 * The output should be a sorted array if, and only if, the array
 * is stack-sortable. You can find files full of stack-sortable and
 * stack-unsortable arrays in the 'expected' folder.
 */
void stackSort(int * array, int len)
{
  int lcv_write = 1;
  int lcv2 = 0;
  int * new = malloc(sizeof(int) * len);
  Stack * stack = NULL;
  stack = Stack_create();
  stack -> list = malloc(sizeof(ListNode));
  ListNode * li = stack -> list;
  li -> value = array[0];
  li -> next = NULL;

  if(len == 1 || isStackSortable(array , len) == FALSE)
    {
      free(new);
      Stack_destroy(stack);
      return;
    }
  while(lcv_write < len)
    {
      if(array[lcv_write] < li -> value)
	{
	  Stack_push(stack , array[lcv_write]);
	  li = stack -> list;
	}
      else if(array[lcv_write] > li -> value || Stack_isEmpty(stack))
	{
	  while(!Stack_isEmpty(stack) && array[lcv_write] > li -> value)
	    {
	      new[lcv2] = Stack_pop(stack);
	      lcv2++;
	      li = stack -> list;
	    }
	  Stack_push(stack , array[lcv_write]);
	  li = stack -> list;
	}
      lcv_write++;
    }
  while(!Stack_isEmpty(stack))
    {
      new[lcv2++] = Stack_pop(stack);
    }
  for(lcv_write = 0;lcv_write < len;lcv_write++)
    {
      array[lcv_write] = new[lcv_write];
    }
  if(stack != NULL || stack -> list != NULL)
    {
      Stack_destroy(stack);
    }
  free(new);
  return;
}

/**
 * Return TRUE (1) if the 'array' of length 'len' is stack-sortable.
 *
 * To do this you must:
 * (1) If 'len' is less than 3, return TRUE.
 * (2) Find the maximum value in 'array'.
 * (3) Partition array into two parts: left of max, and right of max.
 * (4) The maximum value in left must be smaller than the minimum
 *     value in right. (Otherwise return FALSE.)
 * (5) Return TRUE if both left and right are stack-sortable.
 *
 * The 'expected' directory contains files for all sortable and 
 * unsortable sequences of length len. You must return TRUE for every
 * sequence in the sortable files, and you must return FALSE for every
 * sequence in the unsortable files.
 */
int isStackSortable(int * array, int len)
{
  int lcv = 0;
  int locmax = 0;
  int max = 0;
  int maxleft = -1;
  int minright = 99999;

  if(len < 3)
    {
      return TRUE;
    }

  while(lcv < len)
    {
      if(array[lcv] > max)
        {
         max = array[lcv];
         locmax = lcv;
        }
      lcv++;
    }

  lcv = 0;
  while(lcv < locmax)
    {
      if(array[lcv] > maxleft)
        {
         maxleft = array[lcv];
        }
      lcv++;
    }

    for(lcv = locmax + 1; lcv < len; lcv++)
    {
      if(array[lcv] < minright)
        {
         minright = array[lcv];
        }
    }

  if(maxleft <= minright)
    {
      if((isStackSortable(array, locmax) && isStackSortable(&array[locmax + 1], len - locmax - 1)) == 1)
        {
         return TRUE;
        }
    }
  else
    {
      return FALSE;
    }
  return FALSE;
}

/**
 * Generates (and prints) all the unique binary tree shapes of size k
 *
 * To do this, you must:
 * (1) Create an array with the elements [0..k-1] inclusive.
 * (2) Find all the permutations of this array.
 * (3) In the base-case of your permute function, you must test if the
 *     permutation is "stack-sortable"
 * (4) If the permutation is "stack-sortable", then build a binary
 *     tree, and print it using the "Tree_printShape(...)" function.
 *
 * Your genShapes() function must NOT produce duplicate tree shapes.
 * The correct outputs for sizes [1..9] are in the 'expected' 
 * directory.
 */
void permutation(int *, int, int);
void swap(int*, int*);

void genShapes(int k)
{
  int * array = malloc(sizeof(int) * k);
  int lcv = 0;
  int lcv2 = 0;
  while(lcv < k)
    {
      array[lcv] = lcv;
      lcv++;
    }
  permutation(array , lcv2 , k);
  free(array);
}

void permutation(int * arr, int ind, int len)
{
  int lcv = 0;
  if(ind == len)
    {
      if(isStackSortable(arr, len))
        {
         TreeNode * tree = Tree_build(arr, len);
         Tree_printShape(tree);
         Tree_destroy(tree);
        }
      return;
    }
  lcv = ind;
  while(lcv < len)
    {
      swap(&arr[lcv], &arr[ind]);
      permutation(arr, ind + 1, len);
      swap(&arr[lcv], &arr[ind]);
      lcv++;
    }
}

void swap(int* a, int* b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}



