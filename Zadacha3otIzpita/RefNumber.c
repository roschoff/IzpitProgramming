#include <stdio.h>

int main(void)
{
	int i, num;

	printf("Enter a reference number: ");
	scanf("%d", &i);	
	
	printf("Enter a number: ");
	scanf("%d", &num);

	for (num; num != 0;) {
		if (num >= i) {
			printf("Abweichung: %d\n", num - i);
		}
		else if (num < i) {
			printf("Abweichung: %d\n", i - num);
		}
		printf("Enter num: ");
		scanf("%d", &num);
	}
	return 0;
}

/*do {
printf("Enter number: ");
scanf("%d", &num);

if (num >= i) {
printf("Abweichung: %d\n", num - i);
}
else if (num < i) {
printf("Abweichung: %d\n", i - num);
}
} while (num != 0);*/