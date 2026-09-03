#include "output_array.h"
#include <stdio.h>

void output_array(double arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf(" %.2f",arr[i]);
	}
	printf("\n");
}
