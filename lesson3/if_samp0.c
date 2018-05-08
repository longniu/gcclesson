/*The program is practice for learning if-elase */
#include<stdio.h>

int main(void)
{
  const float unit_price = 3.50;
  int quantity = 0;
  printf("Enter the number that you want to buy: ");
  scanf("%d", &quantity);
  /*
    judge the price
  */
  if(quantity<0)
    printf("\nPlease input a decimal number over 0!");
  else if (quantity<10)
    printf("\nThe price for %d is $%.2f\n", quantity,
	   quantity*unit_price);
  else
    printf("\nThe price for %d is $%.2f\n", quantity,
	   quantity*unit_price*0.95);
  return 1;
    
}
