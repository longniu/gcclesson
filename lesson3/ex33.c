/* program of Exercise 3.3 */
#include<stdio.h>

int main(void){
  unsigned int num_buy = 0;
  const float unit_price = 5.0;
  float  discount = 0.0;
  
  printf("\nThe number of you buy: ");
  scanf("%d", &num_buy);
  
  if(num_buy>= 50){
    discount = 0.1;
  }else if(num_buy>=30){
    discount = 0.15;
  }
  
  printf("\nThe cost is : %.2f", unit_price*(1-discount));

  return 0;
}
