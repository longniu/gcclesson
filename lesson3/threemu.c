#include<stdio.h>
int main(void)
{
  int a, b, max;
  printf("\nInput two numbers: ");
  scanf("%d", &a);
  printf("\nInput the last number: ");
  scanf("%d", &b);

  printf("\nMax = %d", a>=b?a:b);
}
