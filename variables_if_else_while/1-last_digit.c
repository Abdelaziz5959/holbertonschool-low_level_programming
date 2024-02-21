#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - The last digit
*
* Description: This program will assign a random number to
* the variable n each time it is executed.
*
* Return: Always (0)
*/

int main(void)
{
	int n;
	int last digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last digit = n % 10;

	if(last digit > 5)
	{
	printf("last digit of %d is %d and is greater than 5\n",n , last_digit);
	}
	else if(last digit == 0)
	{
		printf("last digit of %d is %d and is 0\n",n , last_digit);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n",n , last_digit);
	}
	return (0);
}
