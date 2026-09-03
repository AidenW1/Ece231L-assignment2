#include "statistics.h"
#include <math.h>

double sum_array(double arr[], int n)
{
        double total = 0.0;
        for (int i = 0; i < n; i++)
        {
                total += arr[i];
        }
        return total;
}

double average_array(double arr[], int n)
{
        return sum_array(arr, n) / n;
}

double std_array(double arr[], int n)
{
        double mean = average_array(arr, n);
        double total = 0.0;
        for (int i = 0; i < n; i++)
        {
                double diff = arr[i] - mean;
                total += diff * diff;
        }
        return sqrt(total / n);
}

double max_array(double arr[], int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

double min_array(double arr[], int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

double diff(double arr[], int n)
{
	return fabs(max_array(arr, n) - min_array(arr, n));
}
