#include <stdio.h>

int main(int argc, char *argv[])
{
	int answer;
	int cnt;

	answer = 0;
	cnt = 0;

	while(cnt < 10)
	{
		answer += (cnt + 1);
		cnt ++;
	}

	printf("answer = %d\n", answer);

	return 0;
}