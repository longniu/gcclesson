/* Program 3.6 Multiple discount levels */
#include <stdio.h>

int main(void)
{
  const float unit_price = 3.5,
    discount1 = 0.05,
    discount2 = 0.1,
    discount3 = 0.15;
  float  discount = 0.0,
    total_price = 0.0;
  int quantity = 0;

  printf("Enter the number that you want to buy: ");
  scanf("%d", &quantity);
  discount = 1- ( quantity > 50 ? discount3 : (quantity > 20 ? discount2 :
      (quantity > 10 ? discount1 : 0.0))); 
  // printf("\ndiscount =%.2f", quantity>=50 ? discount3 : 0.0);
  total_price = quantity * unit_price * discount;
  // total_price = ((quantity >50 ? 0.85 : 1.0 )*quantity*unit_price);
  printf("\nThe Price for %d is $%.2f\n", quantity, total_price);
  return 0;
}
