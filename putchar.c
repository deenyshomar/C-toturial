#include <stdio.h>
/**
 * main - entry point
 *
 * Description: unformatted output 'putchar'
 *
 * putchar: function that print single character to the screen
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{

	int i;

	char ds[11] = "deenyshomar";
	for (i = 0; i <= 11; i++)
	{
		putchar(ds[i]);
		putchar('\n');
	}
	putchar('\n');
	return (0);
}
