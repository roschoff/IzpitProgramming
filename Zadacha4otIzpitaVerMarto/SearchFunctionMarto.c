#include <stdio.h>

int search(int arr[], int size, int *num);

int main()
{
	int zwr[55], nz, i, first_num;

	printf("Enter size of array: ");
	scanf("%d", &nz);
	while (nz < 0 || nz > 55)
	{
		printf("Invalid value for nz! Try again: ");
		scanf("%d", &nz);
	}

	for (i = 0; i < nz; ++i)
	{
		printf("Enter value of element %d: ", i);
		scanf("%d", &zwr[i]);
	}

	printf("First element: %d, index: %d.\n", first_num, search(zwr, nz, &first_num));

	return 0;
}

int search(int arr[], int size, int *num)
{
	int i;

	for (i = 0; i < size; ++i)
	{
		int deset = arr[i] / 10;
		int edin = arr[i] % 10;
		if (deset + edin == 15)
		{
			*num = arr[i];
			return i;
		}
	}

	*num = 0;
	return -1;
}