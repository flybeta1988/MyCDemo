#include <stdio.h>
#include "lib/demo.h"

int main ()
{
	int c, d, sum = 0;

	printf("Input tow integers: \n");

	scanf("%d%d", &c, &d);

	sum = add(c, d);
	c = foo(d);

	printf("sum = %d\n", sum);
	printf("foo = %d\n", c);

	return 0;
}
