/* program 4.2 Drawing a box */
#include <stdio.h>
int main(void)
{
  int count = 1;
  int sum = 0;
  printf("\n*****************");
  for(; count<=8; count++)
    printf("\n*               *");
  
  printf("\n*****************");
  printf("\n Count = %d\n",count);

  for(int i = 1; i<=10; sum += i++);
  printf("\nTotal of 1 to 10 sum is : %d \n", sum);
  return 0;
}
