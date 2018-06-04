/* program exercise 5.1 
1. Read 5 values of type double from keyboard and store them in an array.
2. Calculate the reciprocal of each value (reciprocal of a value x is 1.0/x) and 
store it in a separate array. 
3. Output the value of the reciprocals, and calculate and output the sum of the reciprocals
*/

#include<stdio.h>

int main(void){
  double inputValue[5], outputValue[5];
  double sumRecip = 0.0;

  for(int i=0; i<5; i++){
    printf("\nInput a double value: ");
    scanf("%lf", &inputValue[i]);
  
  }

  for(int j=0; j<5; j++){
    printf("\nInputValue[%d]: %.2lf", j, inputValue[j]);
    if(inputValue[j]==0.0){
      outputValue[j]=0.0;
    }else{
      outputValue[j]= 1.0/inputValue[j];
    }
    printf("\nReciprocal of you input value: %lf", outputValue[j]);

    sumRecip += outputValue[j];

  }

  printf("\nThe sum of reciprocal values: %lf", sumRecip);
    
  return 0;
}
