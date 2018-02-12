#include <stdio.h>

int main(void)
{
	char m[] = "source", *p;

	for (p = m + 1; *p; p++) {
		*p -= 1;
	}

	printf("9: %s %c %c", m + 2, *(m + 3), m[0]);

	return 0;
}