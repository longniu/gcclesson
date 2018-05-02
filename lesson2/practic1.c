/* practice: calculate a tree's high with your friend*/
#include<stdio.h>

int main(void)
{
  float distance1 = 0.0f,
    distance2 = 0.0f,
    high_tal = 0.0f,
    high_low = 0.0f;
  /* parameter prepare */

  printf("Please input the front people's highth: ");
  scanf("%f",&high_tal);
  
  printf("\ninput hehand people's highth:");
  scanf("%f",&high_low);
  
  printf("\ninput the distance between yours:");
  scanf("%f", &distance2);

  printf("\nAnd input the distance between the taller and tree: ");
  scanf("%f", &distance1);
  
  printf("\nThe hightn of the tree is %.2f", 
	 high_tal+distance2/distance1*(high_tal - high_low));
  return 1;
}
