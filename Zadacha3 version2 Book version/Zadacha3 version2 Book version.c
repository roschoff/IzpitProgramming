#include <stdio.h>
#include <conio.h>

int main(void)
{
	int n = 0;
	float i, sum = 0, average = 0;
	while (1) {
		printf("Enter number:\n");
		scanf("%f", &i);
		if (i>200) {
			printf("Exiting\n");
			getche();
			return 0;
		}
		if (i >= -10.0 && i <= 6) {
			sum += i;
			n++;
			average = sum / n;
			printf("Numbers inputed %d, average %f\n", n, average);
		}
		else printf("Out of range\n");
	}
	getche();
	return 0;
}