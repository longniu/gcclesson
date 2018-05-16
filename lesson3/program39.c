/* Program 3.9 testing cases */
#include<stdio.h>
#include<ctype.h>

//tolower()
int main(void){
  char answer = 0;
  printf("Enter 'Y' or 'N'");
  scanf("%c", &answer);

  switch(tolower(answer)){
  case 'y':
    printf("\nYou responded in the affirmative.");
    break;
  case 'n':
    printf("\nYou responded in the negative.");
    break;
  default:
    printf("\nYou did not respond correctly...");
    break;
  }
  return 0;
}
