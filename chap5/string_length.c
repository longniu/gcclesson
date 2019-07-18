#include <stdio.h>

int main(int argc, char *argv[])
{
	char one_string[16] = "Hello, world\n";
	int length;

	length = 0;
	while (one_string[length] != '\0') {
		length++;
	}

	printf("length of one_string is %d\n", length);

	return 0;
}