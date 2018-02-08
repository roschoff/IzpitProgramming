#include <stdio.h>

void minmax(float m[], int n, float *min, float *max);

int main(void)
{
	float v[60];
	int nv, i;
	float minimum, maximum;

	printf("Enter number of elements(60 max): ");
	scanf("%d", &nv);

	for (i = 0; i < nv; ++i)
	{
		printf("Enter element no.%d: ", i);
		scanf("%f", &v[i]);
	}

	minmax(v, nv, &minimum, &maximum);

	printf("Minimum element: %f, maximum element: %f. ", minimum, maximum);
	return 0;
}

void minmax(float m[], int n, float *min, float *max)
{
	int i;
	*min = m[0];
	*max = m[0];
	for (i = 0; i < n; ++i)
	{
		if (m[i] < *min)
			*min = m[i];
		if (m[i] > *max)
			*max = m[i];
	}
}