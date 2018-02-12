#include <stdio.h>

int w = 12, v = -7;

short f(short a, short *b);

int main(void)
{
	short x, y, z;

	x = 5;
	y = 4;
	w--;
	z = f(y, &x);
	printf("8: %d %d %d %d\n", x, y, z, w);

	return 0;
}
short f(short a, short *b) {
	a--;
	(*b)++;
	w--;
	v = 7;
	printf("10: %d %d %d\n", a, v, w);
	return v;
}