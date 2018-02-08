#include <stdio.h>

float fun10(float x, int n);
int fun11(int *x, int n);
int fun12(int *x, int n, int el);

int main()
{
	int z[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 }, r, pos, s, i, k, *ptr;
	r = 1;
	k = 0;

	for (i = 0; i<10; i++)
	{
		if (z[i] % 6 == 0)
		{
			r *= z[i] / 6;
			k++;
		}
	}

	printf(" 6: %d %d\n", r, k);

	printf(" 7:");
	for (ptr = z; ptr < z + 10; ptr += 2)
		printf(" %d", *ptr);
	printf("\n");

	ptr = z + 5;
	printf(" 8: %d %d %d %d\n", *ptr, z[4], *(ptr + 3), *(ptr - 3));

	ptr -= 2;
	printf(" 9: %d %d %d %d\n", *ptr, z[4], *(ptr + 3), *(ptr - 3));


	printf("10: %.2f\n", fun10(5, 3));


	s = 50;
	pos = fun12(z, 10, s);
	if (pos == -1)
		printf("11: Element mit Wert = %d ist nicht gefunden\n", s);
	else
		printf("12: Die Position des Elements mit Wert %d ist = %d\n", s, pos);

	return 0;
}

float fun10(float x, int n)
{
	float p;
	for (p = 1.0; n>0; --n)
		p *= x;
	return p;
}

int fun12(int *x, int n, int el)
{
	int i;
	for (i = 0; i<n; i++)
		if (x[i] == el)
			return i;
	return -1;
}