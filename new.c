#include <stdio.h>
#include <stdlib.h>

/**
 * This program takes a number and informs the user if it's positive, negative or zero.
 *
 * @version 10-07-2015
 */
int main(void)
{
	int number;

	printf("Please enter a number: ");
	scanf("%d", &number);

// checking stuff
	if (number > 0)
		printf("Number is greater than zero.\n");
	else if (number < 0)
		printf("Number is negative.\n");
	else
		printf("Number is zero.\n");

	return EXIT_SUCCESS;
}
