/* Practice of lesson 4 : Use loop */
#include<stdio.h>
#include<ctype.h>
#include<time.h>
#include<stdlib.h>
#include<stdbool.h>
int main(void)
{
  int simNum = 0,
    guessNum = 0,
    digitLength = 2;

  time_t now = 0;
  int time_taken = 0;
  char choosen = 'n';
  printf("\nRemember the digit sequese:");
  do{
      time_taken = clock();
      int count = 0;
      bool guessResult = false;
      do{

	
	//create a random digit that lenght is 'digitLength'	
	srand(time(NULL));
	now = clock();	

	int temp = 1;
	for(int i = 1; i<=digitLength; temp*=10, i++);
	simNum = rand()%temp;
	
	printf("\n%d ", simNum);
	
	for(;clock() - now <= CLOCKS_PER_SEC;);

	printf("\r\a");
	for(int j = 1; j<= (digitLength+1); j++){
	  printf("-");
	}
	
	//Ask player input his answer
	printf("\nRe-input the digit sequese: ");
	scanf(" %d", &guessNum);
	
	//judge how many times and increse the difficult level
	if(simNum == guessNum){
	  printf("\nRight!");
	  guessResult = true;
	  count++;
	  if(count == 3){
	    digitLength++;
	    count = 0;
	  }
	}else{
	  printf("\nWrong!\n");
	}
      }while(simNum == guessNum);
      
      printf("\nDo you want play again (y/n): ");
      scanf(" %c", &choosen);
    }while(tolower(choosen)=='y');
  
  return 0;
}
