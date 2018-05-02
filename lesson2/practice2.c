/*The program is convert number by alphabet to japanese style*/

#include<stdio.h>

int main(void)
{
  float lg = 0.0f,
    wg = 0.0f;
  printf("Input the length of room: ");
  scanf("%f",&lg);
  printf("\nInput the width of room: ");
  scanf("%f",&wg);
  printf("\n\nThe square of room is %.2f", lg*wg);
  return 0;
}
