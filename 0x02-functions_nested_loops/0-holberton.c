#include "holberton.h"

/**
* main - Print the word "Holberton"
*putchar - Prints the character to the terminal
* Return: Always 0 (Success)
*/
int putchar(int c);
int main(void)
{
	int i;
	char p[] = "Holberton";

	for (i = 0; i < 9; i++)
		{
		  putchar(p[i]);
		}
	putchar('\n');
	return (0);
}
