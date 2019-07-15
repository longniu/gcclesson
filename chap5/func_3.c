#include <stdio.h>

int sum(double a, double b);

int sum(double a, double b)
{
	int return_value;
	return_value = a + b;
	return return_value;
}

int main(int argc, char *argv[]){
	double num_1;
	double num_2;
	int answer;

	num_1 = 1.0;
	num_2 = 2.0;
	answer = sum(num_1, num_2);

	printf("answer = %d\n", answer);

	return 0;
}
