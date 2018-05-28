/*program 4.9 sums of integer step by step */
#include<stdio.h>

int main(void)
{
  int sum = 0,
    count = 0;

  printf("\nEnter the number of integers you want to sum: ");
  scanf(" %d", &count);

  for(int i = 1; i <= count ; i++)
    {
      sum = 0;
      for(int j = 1; j <= i ; sum +=j, j++);

      printf("\n%d\t%d", i, sum);
    }

  //nesting while loop within for loop
  for(int i = 1; i <= count ; i++)
    {
      sum = 1;
      int j = 1;
      printf("\n1");
      while(j<i)
	{
	  sum+= ++j;
	  printf("+%d",j);
	}
      printf(" =%d\n",sum);
    }

  
  return 0;
}
