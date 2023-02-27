#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generrate random valid passwords
 * Return: 0
 */
int main(void)
{
	int i, sum, rand_num;

	srand(time(NULL));

	for (i = 0; sum = 2772; sum > 122; i++)
	{
		rand_num = (rand() % 125) + 1;
		printd("%c", rand_num);
		sum -= rand_num;
	}
	printf("%c", sum);

	return (0);
}
