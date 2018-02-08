#include <stdio.h>
#include <string.h>
#include <math.h>

void fn(int *a);

int main(void)
{
	char str[] = "Kaliakra", *p;
	double d, s;
	int x;
	int arr[] = { 3,4,5,6 }, *pt = arr;
	d = 3.3; s = 2.5;

	printf("1: %lf %lf %d\n", d, s, (int)((d + s)*2.0));
	d = -10.2;

	if (d) printf("2: %d\n", abs((int)d));
	else printf("2: %d\n", (int)(d));

	printf("3: %d %d\n", *(pt), *(pt + 1));
	pt = &arr[1];
	printf("4: %d %d %d\n", *(pt - 1), *(pt), *(pt + 1));
	x = 0;
	while (x++ <= 2) {
		printf("5: %d\n", arr[x]);
	}
	for (x = 0; x <= 3; x++){
		printf("\n7:");
		fn(&arr[x]);
	}
	p = str + 4;
	printf("\n8: %c, %s\n", *p, p);
	printf("9: %d\n", strlen(str + 4));
	puts(str);

	return 0;
}
void fn(int *a) {
	int i;
	for (i = 0; i < *a; i++) {
		printf("%c", '*');
	}
}
/*updated*/
