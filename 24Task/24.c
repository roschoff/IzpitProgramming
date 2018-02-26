#include <stdio.h>

int main(void)
{
	int i, a=0, b=12;

	for (i = 0; b<21; i++) {
		
		a = (b + 24) / 2;
		b = a;
		printf("%d ", b);
		
	}
	return 0;
}