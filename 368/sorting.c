long *Load_File(char *Filename, int *Size)
{
  int *arr;
  FILE* fptr = fopen(Filename,"r");
  int val;
  if(fptr == NULL)
    {
      return NULL;
    }
  fscanf(fptr , "%d" , & val);
  *Size = val;
  arr = malloc(val * sizeof(int));
  int number = 0;
  while(fscanf(fptr , "%d" , & val) == 1)
    {
      arr[number] = val;
      number++;
    }
  fclose(fptr);
  return arr;
}

int Save_File(char *Filename, long *Array, int Size)
{

}


void Shell_Insertion_Sort(long *Array, int Size, double *N_Comp, double *N_Move)
{
  int i;
  int j;
  int n = 0;
  int temp;
  if(Size < pow(3,n))
    {
      n += 1;
    }
  n = n-1;
  for(n;n < 0;n--)
    {
      k = pow(3,n);
      for(j = k;j > Size - 1;j++)
	{
	  temp = array[j];
	  i = j;
    }
}

void Shell_Selection_Sort(long *Array, int Size, double *N_Comp, double *N_Move)
{

}
