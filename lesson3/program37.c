/* Program 3.7 Confused recruiting policy */
#include<stdio.h>

int main(void)
{
  unsigned int age;
  enum colleage {yelu, haford} daixue;
  enum discipline {chemistry, economic} zhuanye;
  char input_daxue[30], input_zhuanye[30], judge0;
  _Bool judge1 = false;
  printf("Please input your age: ");
  scanf("%d", &age);
  
  printf("\nPlease input your colleage: ");
  scanf("%s", &input_daxue);

  printf("\nAnd input your discipline: ");
  scanf("%s", &input_zhuanye);

  printf("\nThen your graduate from %s on %s discipline: y or n?",
	 input_daxue, input_zhuanye);
  scanf("%s", &judge0);
  
  if(judge0 == 'y'){
    //judge is the man full the condition
    printf("\nContinuing");
    printf("\n\n\n ");
    judge = age>=25 && 
  }else{
    if(judge0 == 'n'){
      printf("\nPlease run again and input currect info.");
    }
    else{
      printf("\nPlease input \'y\' or \'n\'");
    }
  }  

  return 0;
}
