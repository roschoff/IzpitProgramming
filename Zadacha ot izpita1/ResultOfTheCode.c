#include <stdio.h>

int w = 12, v = -7;

short f(short a, short *b) {
	a--; 
	(*b)++;
	w--;
	v = 7;
	printf("10: %d %d %d\n", a, v, w);
	return v;
}
int main(void)
{
	/*char m[] = "source", *p;*/
	short x, y, z, arr[] = { -5, 2, -7, 17 }, *ps = arr;
	
	/*y = z = 9;
	x = (y == z);
	printf("1: %d %d %d\n", x, y, z);
	
	x = y = 2; 
	x += (y++ == 3);
	printf("2: %d %d\n", x, y);
	
	x = 8; 
	y = 2;
	z = 0; 
	printf("3: %d %d %d %d\n", !x || y, x && !y, !z, x);
	
	x = 8; 
	y = 6; 
	printf("4: %d %d %d\n", x, y, x > y ? x - 2 : y + 1);
	
	y = 3; 
	z = 3; 
	if (z == (x = ++y)) y = 1; 
	else y = 3;
	printf("5: %d %d %d\n", x, y, z);
	
	for (x = y = 8; x <= y; x++) {
		printf("6: %d %d\n", x, y);
	}

	printf("7: %d %d\n", ps[3], *(arr + 1));
	*/
	x = 5; 
	y = 4; 
	w--; 
	z = f(y, &x); 
	printf("8: %d %d %d %d\n", x, y, z, w);

	/*for (p = m + 1; *p; p++) {
		*p -= 1;
	}

	printf("9: %s %c %c", m + 2, *(m + 3), m[0]);
	*/
	return 0;

}/*testche*/