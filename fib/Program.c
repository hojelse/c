#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 1;

	while(a < 10)
	{
		a = b;
		b = c;
		c = a + b;
		printf("%i\n", c);	
	}
	return 0;
}
