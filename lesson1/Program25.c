/* Program 2.5 Calculation with cookies */
#include <stdio.h>

int main(void)
{
  int cookies = 5;
  int cookies_calories = 125;
  int total_eaten = 0;

  int eaten = 2;
  cookies = cookies - eaten;
  total_eaten = total_eaten + eaten;
  printf("\nI have eaten %d cookies. There are %d cookies left\n",
	 eaten, cookies);
  eaten = 3;
  cookies = cookies - eaten;
  total_eaten = total_eaten + eaten;
  printf("\nI have eaten %d more. Now there are %d cookies left\n",
	 eaten, cookies);
  printf("\nTotal energy consumed is %d calories.\n",
	 total_eaten*cookies_calories);
  return 0;
}
