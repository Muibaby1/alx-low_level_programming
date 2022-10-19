#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int ten;

	for (ten = 0; ten <= 9; ten++)
	{
		for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}

		ten++
		_putchar('\n');
	}
}
