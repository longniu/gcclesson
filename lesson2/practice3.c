/* problem for practice 3 */
#include<stdio.h>
int main(void){

  unsigned int version_goods = 1, num_goods = 0;
  
  printf("Please input the version of goods you buy: standard=1 or prime=0\n");
  scanf("%d", &version_goods);

  printf("\nPlease input the number of you buy: ");
  scanf("%d", &num_goods);

  printf("\nThe toltal cost is : %.2f", num_goods*(5.50-version_goods*2));
}  
