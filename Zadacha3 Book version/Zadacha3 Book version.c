#include "stdio.h"

int main()
{
	int a, max, min;
	int i, n, pos1, pos2;

	printf("Input number of elements: ");
	scanf("%d", &n);

	printf("Input the first value: ");
	scanf("%f", &a);
	max = min = a;
	i = pos1 = pos2 = 1;

	while (i < n) {
		i++;
		printf("Input value number %d: ", i);
		scanf("%f", &a);

		if (a > max) { max = a; pos1 = i; }
		if (a < min) { min = a; pos2 = i; }
	}

	printf("max = %f, pos1 = %d\n", max, pos1);
	printf("min = %f, pos2 = %d\n", min, pos2);

	return 0;
}
/*updated*/