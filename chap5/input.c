#include <stdio.h>

int main(int argc, char *argv[])
{
	char one_string[16];
	printf("input> ");

	fgets(one_string, sizeof(one_string), stdin);

	printf("Your input is %s\n", one_string);

	return 0;
}