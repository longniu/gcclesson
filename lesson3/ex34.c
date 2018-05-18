/*Program of practice 3.4 */
#include<stdio.h>
#include<ctype.h>
int main(void){
  float x = 0, y = 0;
  char opt = 0, anw = 0;
  
there:
  printf("\nInput you funtion like x * y \n");
  
  scanf("%f %c %f", &x, &opt, &y);
  
  switch(opt){
  case '+':
    printf(" = %.3f", x+y);
    break;
  case '-':
    printf(" = %.3f", x-y);
    break;
  case '*':
    printf(" = %.3f", x*y);
    break;
  case '/':
    printf(" = %.3f", x/y);
    break;
  default:
    printf("\nPlease input currect funtion.\n");
    break;
  }
  
  printf("\nDo you want continue calculate: y or n? : ");
  scanf(" %c", &anw);
   
  if(toupper(anw)=='Y')
    goto there;
  printf("\nEnd");
  /*
  switch(toupper(anw)){
  case 'Y':
    goto there;
  case 'N':
    break;
  default:
    printf("Input N or Y please\n");
    break;
  }
  */
  return 0;
}
