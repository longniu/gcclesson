/* Program 2.16 Using type char */
#include <stdio.h>

int main(void)
{
  char first = 'A', second = 'B', last = 'Z', number = 40;
  
  char ex1 = first + 2, 
    ex2 = second -1, 
    ex3 = last + 2;
  
  printf("Character value %-5c%-5c%-5c", ex1, ex2, ex3);
  printf("\nNumberical equivalents %-5d%-5d%-5d", ex1,ex2,ex3);
  printf("\nThe number %d is the code for the character %c\n",
	 number, number);
  return 0;
}
