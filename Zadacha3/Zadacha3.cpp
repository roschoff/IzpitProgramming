#include <stdio.h>

int main(void)
{
	int input, i, elem, min, max, pos1, pos2;
	int arr[80];
	printf("Enter number of elements in the array: ");
	scanf("%d", &input);

	for (i = 0; i < input; i++) {
		printf("Enter number: ");
		scanf("%d", &elem);
		arr[i] = elem;
	}

	min = arr[0];
	max = arr[0];
	pos1 = 0;
	pos2 = 0;
	for (i = 0; i<input; i++) {
		if (arr[i] > max) {
			max = arr[i];
			pos1 = i+1;
		}
		if (arr[i] < min) {
			min = arr[i];
			pos2 = i+1;
		}
	}
	printf("min: %d pos: %d max: %d pos: %d\n", min, pos2, max, pos1);

	return 0;
}