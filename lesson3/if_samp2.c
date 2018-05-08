/*program is training for if * if */
#include<stdio.h>
#include<limits.h>

int main(void)
{
  int test = 0; /*Stroes the integer to be checked */
  printf("Enter an integer less then %d:", INT_MAX);
  scanf("%d", &test);
  
  /*Test for odd or even by checking the remainder after
    dividing by 2 */
  if (test % 2 == 0)
  {
    printf("\nThe number %d is even", test);
    if (test % 4 == 0)
      printf("\nThe number %d be halfed is also even", test);
  }
  else
    printf("\nThe number %d is odd\n", test);
  return 1;
}
