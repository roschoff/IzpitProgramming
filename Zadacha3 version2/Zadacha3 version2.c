#include <stdio.h>
#include <conio.h>

int main(void)
{
	int n, i;
	float num, num2 = 0, average = 0;
	printf("Enter number of elements: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		printf("Enter number: ");
		scanf("%f", &num);
		if (num > 200.0) {
			break;
		}
		else {
			if (num>=-10.0 && num<=6.0) {
				num2 += num;
				average = (num2) / (i+1);
				printf("Numbers inputed: %d, the average: %f\n", i + 1, average);
			}
			else printf("number out of range ");
		}
	}
}