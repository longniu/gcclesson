/*This program for learn wide char type data of C program */
#include<stdio.h>

int main(void)
{
  wchar_t wch1 = L'B';
  wchar_t wch = 0;
  scanf("%lc", &wch);
  printf("\nYou entered %lc\n", wch);
  return 0;
}
