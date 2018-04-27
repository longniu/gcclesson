/* Program 2.8 calculations on a table */
#include <stdio.h>

int main(void)
{
  float radius = 0.0f,
    diameter = 0.0f,
    circumference = 0.0f,
    area = 0.0f,
    Pi = 3.14159265f;

  printf("Input the diameter of the table: ");
  scanf("%f", &diameter);
  radius = diameter/2.0f;
  circumference = 2.0f * Pi * radius;
  area = Pi * radius * radius;
  printf("\nThe circumference is %.2f", circumference);
  printf("\nThe area is %.2f\n", area);
  return 0;
}
