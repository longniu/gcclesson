/* exercise 5.2 calculate a loop*/
#include<stdio.h>

int main(void){
  double data1[100];
  double sumloop = 0.0, temp = 1.0;
  double value = 0.0;

  for(int i = 1; i<=100; i++){
    /* '1.0' is very important. if use integer 1, calculate result is 0 */
    data1[i-1] = 1.0/(i*2*(i*2+1)*(i*2+2));
    printf("\ndata[%d]= 1/(%d*%d*%d)",i-1, i*2, i*2+1,i*2+2);
  }
  
  for(int j = 0; j <100; j++){
    sumloop += data1[j]*temp;
    temp = - temp;
  }
  
  value = sumloop * 4.0 + 3.0;

  printf("\nResult value is %.7lf", value);
  return 0;
}
