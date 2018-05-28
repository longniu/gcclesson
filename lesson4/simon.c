/*Program 4.12 simple simon */
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  /*Records if another game is to be played */
  char another_game = 'Y';

  /* true if correct sequence entered, false otherwise */
  bool correct = false;

  /* Number of sequences entered successfully */
  int counter = 0;

  int sequence_length = 0;
  time_t seed = 0;
  int number = 0;

  time_t now = 0;
  int time_taken = 0;
  
  /*Describe how the game is played */
  printf("\nTo play Simple Simon, watch the screen for a sequence of digits.\n");
  printf("Watch carefully, as the digits are only displayed");
  printf("for a second!\n");
  printf("The computer will remove them, and then prompt you ");
  printf("to enter the same sequence.\n");
  printf("When you do, you must put spaces between the digits.\n");
  printf("\n Good Luck!\nPress Enter to play\n");
  scanf("%c", &another_game);
  do{
    correct = true;
    counter = 0;
    sequence_length = 2;
    time_taken = clock();

    while(correct){
      /* On every third successful try, increase the sequence length */
      sequence_length += counter++ %3 == 0;

      /* Set seed to be the number of seconds since Jan 1, 1970 */
      seed = time(NULL);

      now = clock(); //record start time for sequence

      /* Generate a sequence of numbers and display the number */
      srand((unsigned int)seed); //Initialize the random sequence
      for(int i = 1; i<= sequence_length; i++)
	printf("%d ", rand() % 10);

      /* Wait one second */
      for( ;clock() - now < CLOCKS_PER_SEC; );
      
      /* Now overwrith the digit sequence */
      printf("\r");
      for(int i = 1; i <= sequence_length; i++)
	printf(" ");

      if(counter == 1)
	printf("\nNow you enter the sequence -don't forget the spaces\n");
      else
	printf("\r");

      /* Check the input sequence of digits against the original */
      srand((unsigned int)seed);
      for(int i = 1; i <= sequence_length; i++){
	scanf("%d", &number);
	if(number != rand()%10){
	  correct = false;
	  break;
	}
      }
      printf("%s\n", correct? "Correct!":"Wrong!");
    }
    /* Calculate total time to play the game in seconds */
    time_taken = (clock() - time_taken) / CLOCKS_PER_SEC;

    /* Output the game score */
    printf("\n\n Your score is %d", --counter*100/time_taken);

    fflush(stdin);
    printf("\nDo you want to play again (y/n)? ");
    scanf("%c", &another_game);
  }while(toupper(another_game) == 'Y');
  return 0;
}
