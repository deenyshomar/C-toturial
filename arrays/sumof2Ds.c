#include <stdio.h>

int main()
{
	int a[2][3], b[2][3], c[2][3];
	int i, j;

	printf("Enter the first matrix: \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d\n", &a[i][j]);
		}
	}
	printf("Enter the second matrix: \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d\n", &b[2][3]);
		}
	}
	printf("The sum of the 2 matrix is :\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			printf("%d\t", c[i][j]);
		}
		putchar('\n');
	}
	return (0);
}
