/**
 * main - Entry Point
 * function prints card value
 * Return: (0) succesfull
 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int val = 0;
	char card_name[3];

	puts("Enter the card_name: ");
	scanf("%2s", card_name);
	if (card_name[0] == 'K')
	{
		val = 10;
	}
	else if (card_name[0] == 'Q')
	{
		val = 10;
	}
	else if (card_name[0] == 'J')
	{
		val = 10;
	}
	else if (card_name[0] == 'A')
	{
		val = 11;
	}
	else
	{
		val = atoi(card_name);
	}
	printf("The card value is: %i\n", val);
	return (0);
}
