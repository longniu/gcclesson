/* Exercise 5.3
   1.read 5 values from the keyboard and store them in an array of type float
   with the name 'amounts'

   2.Create 2 arrays of 5 elements of type long with the names 'dollars' and
   'cents'

   3.Store the whole number part of each value in the 'amounts' array in the
   corresponding element of 'dollars' and the fractional part of the amount
   as a 2-digit integer in cents (e.g. 2.75 in 'amounts[1]' would result in
   2 being stored in 'dollars[1]' and 75 being stored in 'cents[1]').
   
   4.Output the values from the 2 arrays of type 'long' as monetary amounts
   (e.g., $2.75).
*/
#include<stdio.h>
#include<math.h>

int main(void){
  float amounts[5];
  int dollars[5], cents[5];

  printf("\nEnter 5 amounts");
  printf("\nAfter type in a value, input space and go to input next value\n");

  for(int i=0; i<5; i++)
    scanf("%f", &amounts[i]);

  
  for(int j=0; j<5; j++){
    dollars[j] = (int)amounts[j];
    printf("\namounts[%d] - dollars[%d] = %.3f", j,j,amounts[j]-dollars[j]);
    cents[j] = (int)roundf((100.0*(amounts[j]-dollars[j])));
  }
  printf("\n\n");
  
  for(int x=0; x<5; x++)
    printf("\nAmounts[%d]:$%d.%d", x, dollars[x],cents[x]);
  
  return 0;
}
