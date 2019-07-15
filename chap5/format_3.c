#include <stdio.h>

int main(int argc, char *argv[])
{
	char name[5] = "sean\0";
	char address[6] = "china\0";
	char hoby[11] = "basketball\0";
	printf("%s %s %s\n", name, address, hoby);

	return 0;
}