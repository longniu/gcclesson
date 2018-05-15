/* Program 3.6 Multiple discount levels */
#include <stdio.h>

int main(void)
{
  const float unit_price = 3.5,
    discount1 = 0.05,
    discount2 = 0.1,
    discount3 = 0.15,
    discount = 0.0,
    total_price = 0.0;
  int quantity = 0;

  printf("Enter the number that you want to buy: ");
  scanf("%d", &quantity);
  discount = quantity > 50 ? discount3 : (quantity > 20 ? discount2 :
					  (quantity > 10 ? discount1 : 0.0));
  //  printf("\ndiscount =%.2f", quantity>=50 ? discount3 : 0.0);
  //  total_price = quantity * unit_price * (1-discount);
  printf("\nThe Price for %d is $%.2f\n", quantity, quantity*unit_price*(1.0 - (quantity > 50 ? discount3 :
		     (quantity > 20 ? discount2 :
		      (quantity > 10 ? discount1 : 0.0)))));
  return 0;
}
