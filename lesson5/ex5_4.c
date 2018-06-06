/* Exercise 5-4 
   1. Defined a 2-D array 'data[12][5]' of type 'double'
   2. Initalize the elements in the first column with value [2.0,3.0] inclusive in step 0.1
   3. row : x, 1/x, x**2, x**3, x**4
   4. Output the array: each raw on a separate line and with a heading for each column
*/
#include<stdio.h>

int main(void){

  double data[11][5];
  double tmp = 2.0;
  
  // Initalize array
  for(int i=0; i<11; i++){
    data[i][0] = tmp;
    data[i][1] = 1.0/data[i][0];
    data[i][2] = data[i][0]*data[i][0];
    data[i][3] = data[i][2]*data[i][0];
    data[i][4] = data[i][3]*data[i][0];
    tmp += 0.1;
  }

  
  /* Output the array
     print every element
     like:
     | column 1 | column 2 | column 3 | ... | column 11 |
     |   2.0    |    2.1   |    2.2   | ... |    3.0    |
  */
  // print every line
  for(int j = 0; j <= 5; j++){
    // print every column
    for(int i = 0; i < 11; i++){
      //out put every element split by '|'
      printf("|");
      
      // Output heading
      if(j == 0)
	printf(" column %d ", i+1);
      else
	printf(" %5.1lf    ", data[i][j-1]);
    }
    // change line and end by '|'
    printf("|\n");
  }
  return 0;
}
