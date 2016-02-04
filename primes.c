#include <stdio.h>
#include <stdbool.h>

// Takes a number and determines if it is prime or not
int main(void)
{
	int number;
	int i;
	bool isPrime = true;

	printf("Plese, enter a positive number: ");
	scanf("%d", &number);
	i = number - 1;  // number is divisible by itself, don't check it

	while (i > 1 && isPrime)
	{
		if (number % i == 0)
		{
			isPrime = false;
		}

		i--;	
	}

	// Informs the user
	if (isPrime)
	{
		printf("Number is prime.\n");
	}
	else
	{
		printf("Number is not prime.\n");
	}

	return 0;
}
