/* Program 6.3 Joining strings */
#include <stdio.h>

int main(void){
  char str1[40] = "To be or not to be";
  char str2[] = ",that is the question";
  int count1 = 0, count2 = 0;

  while(str1[count1])
    count1++;

  while(str2[count2])
    count2++;

  printf("\nLength of str1 = %d", sizeof(str1));
  printf("\nLength of str1 + str2 = %d", count1 + count2 +1);
  if(sizeof(str1) < count1 + count2 +1)
    printf("\nYou can't put a quart into a pint pot.");
  else{
    count2 = 0;
    while(str1[count1++] = str2[count2++]);
    printf("\n%s\n", str1);
  }
  return 0;
}
