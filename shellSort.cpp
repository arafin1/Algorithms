
//Arafin Saad
//arafinsaadmahmud@gmail.com

void ShellSort(int numbers[], int array_size)
{
 int a[array_size];
 for(int gap =0; gap<array_size;gap++){
    for(int i = numbers[gap]; i<array_size;i++){
        int j;
        int temp = numbers[i];
        for (j = i; j >= numbers[gap] && numbers[j - numbers[gap]] > temp; j -= numbers[gap])
        {
            numbers[j] = numbers[j - numbers[gap]];
        }
        numbers[j] = temp;

    }
 }

}
/***************************************************************

//Rashid,Bin Muhammad (2020) Shell Sort Source code [Source code].
//http://www.personal.kent.edu/~rmuhamma/Algorithms/MyAlgorithms/Sorting/shellSort.htm
****************************************************************/

void ShellSort(int numbers[], int array_size)
{
  int i, j, increment, temp;

  increment = 3;
  while (increment > 0)
  {
    for (i=0; i < array_size; i++)
    {
      j = i;
      temp = numbers[i];
      while ((j >= increment) && (numbers[j-increment] > temp))
      {
        numbers[j] = numbers[j - increment];
        j = j - increment;
      }
      numbers[j] = temp;
    }
    if (increment/2 != 0)
      increment = increment/2;
    else if (increment == 1)
      increment = 0;
    else
      increment = 1;
  }
}


