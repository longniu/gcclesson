/* Program 3.4 Converting uppercase to lowercase */
#include<stdio.h>

int main(void)
{
  char letter = 0;

  printf("Enter an uppercase letter:");
  scanf("%c", &letter);

  if(letter >= 'A' && letter <= 'Z')
    {
      letter = letter - 'A' + 'a';
      printf("\nYou entered an uppercase %c\n", letter);
    }else{
    printf("Try using the shift key, Bud! I want a captical letter.\n");
  }

  return 0;
}
