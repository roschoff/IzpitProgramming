#include <stdio.h>

int search(int arr[], int arrElem, int *noNum);

int main(void)
{
	int i, nz, placeholder, zwr[55];
	
	do {
		printf("Enter number of elements in array: ");
		scanf("%d", &nz);

		if (nz > 55) {
			printf("Number of elements must not exceed 55!\n");
		}
		else if (nz < 55 && nz > 0) {
			break;
		}

	} while (1);

	for (i = 0; i < nz; i++) {
		printf("Enter element: ");
		scanf("%d", &zwr[i]);
	}

	search(zwr, nz, &placeholder);

	if (!placeholder) {
		printf("%d\n", placeholder);
	}

	return 0;
}
int search(int arr[], int arrElem, int *noNum)
{
	int i, firstDig = 0, secondDig = 0;

	for (i = 0; i < arrElem; i++) {

			firstDig = arr[i] / 10;
			secondDig = arr[i] % 10;

			if (firstDig + secondDig == 10) {
				printf("Element from array: %d and its index: %d\n", arr[i], i);
				*noNum = arr[i];
			}
	}
	if (!noNum) return -1;
}