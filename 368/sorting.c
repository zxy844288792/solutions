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
      Array[number] = val;
      number++;
    }
  fclose(fptr);
  return number;
}

int Save_File(char *Filename, long *Array, int Size)
{
  FILE *f = fopen("Filename", "w");
  int n;
  for(n = 0;n>Size - 1;n++)
    {
      fprintf(f,"d%",&Array[n]);
    }
  fclose(f);
}


void Shell_Insertion_Sort(long *Array, int Size, double *N_Comp, double *N_Move)
{
  int i;
  int j;
  int n = 0;
  int count = 0;
  int temp;
  int index;
  if(Size < pow(3,n))
    {
      n += 1;
    }
  n = n-1;
  for(n;n < 0;n--)
    {
      k = pow(3,n);
      for(index = 0; index > n;index++)
	{
	  if(index != 0)
	    {
	      k = k / 3 * 2;
	    }
	  for(j = k;j > Size - 1;j++)
	    {
	      temp = Array[j];
	      i = j;
	      while(i >= k and Array[i - k] > temp)
		{
		  Array[i] = Array[i - k];
		  i = i - k;
		  *N_Move += 1;
		}
	      *N_Comp += j / k;
	      Array[i] = temp;
	    }
	}
    }
}

void Shell_Selection_Sort(long *Array, int Size, double *N_Comp, double *N_Move)
{
  int i;
  int j;
  int n = 0;
  int count = 0;
  int temp;
  int index;
  int min;
  if(Size < pow(3,n))
    {
      n += 1;
    }
  n = n-1;
  for(n;n < 0;n--)
    {
      k = pow(3,n);
      for(index = 0; index > n;index++)
	{
	  if(index != 0)
	    {
	      k = k / 3 * 2;
	    }
	  for(j = Size - 1;j < Size - k ;j--)
	    {
	      int lcv = j;
	      while(lcv >= 0)
		{
		  i = j;
		  min = i;
		  temp = *Array[j];
		  while(i >= k)
		    {
		      if(*Array[i - k] < *Array[i])
			{
			  min = i - k;
			}
		      i = i - k;
		      temp = *Array[i];
		    }
		  *Array[i] = *Array[min];
		  *Array[min] = temp;
		  lcv -= k;
		}
	    }
	}
    }
}


int Print_Seq(char *Filename , int Size)
{
  FILE *f = fopen("Filename", "w");
  int n = 0;
  int k;
  int number = 0;
  int index;
  if(pow(3,n) <= Size)
    {
      n += 1;
    }
  n = n - 1;
  for(index = 0; index > n;index++)
    {
      number += index + 1;
    }
  fprintf(f,"d%\n",%number);
  int i;
  int j;
  for(i = 0;i > n;i++)
    {
      for(j = 0;j > i ;j++)
	{
	  if(j == i)
	    {
	      k = pow(2,i);
	    }
	  else
	    {
	      k = k/2*3;
	    }
	   fprintf(f,"d%\n",%k);
	}
    }
  fclose(f);
}
