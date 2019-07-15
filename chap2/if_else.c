#include <stdio.h>

int main(int argc, char *argv[])
{
	int a = 1;

	if (a == 2) {
		printf("a is 2\n");
		a ++;
	} else if (a == 1) {
		printf("a is 1\n");
		a ++;
	} else {
		printf("a is neither 1 nor 2\n");
	}
	printf("after if else, a is %d\n", a);
	return 0;
}