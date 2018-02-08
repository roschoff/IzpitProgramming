#include <stdio.h>

void minmax(float m[], int n, float *min, float*max);

int main(void)
{
	int num = 60, nv, i;
	float maximum, minimum, v[60];

	do {
		printf("Enter number of elements: ");
		scanf("%d", &nv);
		if (nv >= 61) printf("Maximum elements allowed: 60\n");
		else break;
	} while (1);

	for (i = 0; i < nv; i++) {
		printf("Enter element %d: ", i+1);
		scanf("%f", &v[i]);
	}
	minmax(v, nv, &minimum, &maximum);

	printf("Minimum elem: %f, maximum elem: %f\n", minimum, maximum);

	return 0;
}
void minmax(float m[], int n, float *min, float*max) 
{
	int i;
	*min = m[0];
	*max = m[0];
	
	for (i = 0; i < n; i++) {
		if (m[i] < *min)
			*min = m[i];
		if (m[i] > *max)
			*max = m[i];
	}
}
