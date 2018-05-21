/* Program 4.7 A guessing Game */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
  int chosen = 0,
    guess = 0,
    count = 0;

  //chosen = rand();

  srand(time(NULL));
  int limit = 20.0;
  chosen = 1+ rand()%limit;

  printf("\nGuess a number between 0 - 20: \n");
  //check the guess and how many times guessed.
  for(;count <= 10; ++count)
  {
    scanf(" %d", &guess);

    if(guess == chosen)
    {
      
      printf("\nCongratulation!\n You guessed %d times.\n", 
	     count+1);
      return 0;
    }else if(guess >20 || guess < 1)
    {
      printf("\nOver rigion, the guess must from 1 to 20\n");
      continue;
    }
    else{
      printf("\nGuess number is %s \n",
	     chosen > guess?"Lower":"Bigger");
    }      
  }
  
  printf("\nThe number is %d\n", chosen);
  
  return 0;
}
