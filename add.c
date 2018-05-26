#include <stdio.h>

int Add (int a, int b)
{
	return (a + b);
}

int main ()
{
	int c, d, sum = 0;

	printf("Input tow integers: \n");

	scanf("%d%d", &c, &d);

	sum = Add(c, d);

	printf("sum = %d\n", sum);

	return 0;
}
