#include <stdio.h>

int main()
{
	int n[5] = {2, 4, 6, 8, 10};
	int *p;
	int *q;

	p = n;

	printf("derefrences of pointer 'p' is : %d\n", *++p);


	printf("new value after operation is : %d\n", *p);
}
