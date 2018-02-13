#include <stdio.h>
#include <stdlib.h> /* for abs/fabs */


int main(void)
{
	float ref, test, diff, sum = 0.0;

	printf("ref: ");
	scanf("%f", &ref);
	printf("test: ");
	scanf("%f", &test);

	while (test != 0)
	{
		diff = test - ref;
		/*diff = fabs(diff);  for always positive difference */
		printf("Difference: %f.\n", diff);
		sum += diff;
		printf("test: ");
		scanf("%f", &test);
	}

	printf("Sum: %f.\n", sum);
	return 0;
}
