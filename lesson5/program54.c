/* program 5.4 rusing the array numbers[] stored */
#include <stdio.h>

int main(void){
  int numbers[10];
  int count = 10;
  long sum = 0L;
  float average = 0.0f;

  printf("\nEnter the 10 numbers' scores: \n");

  for(int i = 0; i < count; i++){
    printf("%2d> ", i+1);
    scanf(" %d", &numbers[i]);
    sum += numbers[i];
  }

  average = (float)sum/count;

  for(int j = 0; j < count; j++)
    printf("\nGrade Number %d was %d", j+1, numbers[j]);

  printf("\nAverage of the %d numbers entered is : %f\n", count, average);

  return 0;
}
