#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generrate random valid passwords
 * Return: 0
 */
int main(void)
{
	int i, sum, diff, rand_num;
	char password[84];

	srand(time(NULL));

	for (i = 0; i < 10; i++)
	{
		rand_num = rand() % 62;
		if (rand_num < 26)
			password[i] = 'a' + rand_num;
		else if (rand_num < 52)
			password[i] = 'A' + rand_num - 26;
		else
			password[i] = '0' + rand_num - 52;
	}

	sum = 0;
	for (i = 0; i < 10; i++)

		sum += password[i];

	password[10] = '0' + sum % 62;

	diff = password[0] - password[10];

	for (i = 11; i < 84; i++)
		password[i] = password[i - 1] - diff;

	printf("%s\n", password);

	return (0);
}
