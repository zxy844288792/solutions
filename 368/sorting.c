long *Load_File(char *Filename, int *Size)
{
  int number = 1;
  int *arr;
  FILE* fptr = fopen(Filename,"r");
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
  *Size = number;
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

int Save_File(char *Filename, long *Array, int Size)
{

}


void Shell_Insertion_Sort(long *Array, int Size, double *N_Comp, double *N_Move)
{
  int i;
  int j;
  int temp;
  for()
    {
      for(i = 0; i < size - 1; i += gap)
        {
	  min_index = i;
	  for(j = i; j < size - 1; j += gap)
            {
	      if(Array[j] < Array[min_index])
                {
		  min_index = j;
                }
            }
	  if(i != min_index)
            {
	      temp = Array[i];
	      Array[i] = Array[min_index];
	      Array[min_index] = temp;
            }
	}
    }
}

void Shell_Selection_Sort(long *Array, int Size, double *N_Comp, double *N_Move)
{

}
