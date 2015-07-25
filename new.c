#include <stdio.h>
#include <stdlib.h>

/**
 * This program takes a number and informs the user if it's positive,
 * negative or zero.
 *
 * @version 10-07-2015
 */
int main(void)
{
	char answer;

	struct {
		int reading, operation;
	} number;

	number.operation = 0;

// checking stuff
	do {
		number.operation++;

		printf("Please enter a number: ");
		scanf("%d", &number.reading);

		if (number.reading > 0)
			printf("Number is greater than zero.\n");
		else if (number.reading < 0)
			fprintf(stderr, "Number is negative.\n");
		else
			printf("Number is zero.\n");
		
		printf("Do another operation? ");
		scanf(" %c", &answer);
	} while (answer == 'y' || answer == 'Y');

	printf("Total operations: %d\n", number.operation);

	return EXIT_SUCCESS;
}
