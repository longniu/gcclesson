/* Program 3.10 Exercising bitwise operators */
#include<stdio.h>

int main(void){
  unsigned int original = 0xABC,
    result = 0,
    mask = 0xF;

  printf("\n original = %X", original);

  mask &= original; //get the last digit
  mask <<= 8; //move the last digit to first
  mask |= (original >> 8); //get the first digit and move it to last
  result = mask | (original & 0xF0 );//get the middle digit

  printf("\n reserve original = %X", result);
  return 0;
}
