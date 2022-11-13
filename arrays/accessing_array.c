#include <stdio.h>
/**
 * formula for accessing array: base(1st address) + index * sizeof data type
 *
 */
int main(void)
{
	int a[5] = {2, 3, 4, 5, 6};

	printf("address of the first element(BASE) of the array is : %p\n", a);
	printf("index 0 address is : B + (0 * 4) = %p\n", a + (0 * 4));
	printf("index 1 address is : B + (1 * 4) = %p\n", a + (1 * 4));
	printf("index 2 address is : B + (2 * 4) = %p\n", a + (2 * 4));
	printf("index 3 address is : B + (3 * 4) = %p\n", a + (3 * 4));
	printf("index 4 address is : B + (4 * 4) = %p\n", a + (4 * 4));
}
