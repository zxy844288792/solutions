#include<stdio.h>
#include<stdlib.h>
long *Load_File(char *Filename, int *Size);
int Save_File(char *Filename, long *Array, int Size);
void Shell_Insertion_Sort(long *Array, int Size, double *N_Comp, double *N_Move);
void Shell_Selection_Sort(long *Array, int Size, double *N_Comp, double *N_Move);

int main(int argc, char * argv[])
{
  char *filename;
  int *Size;
  double *N_Comp;
  double *N_Move;
  long * Array = load_File(Filename,Size);
  
}
