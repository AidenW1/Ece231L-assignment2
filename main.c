//Comment to add space
//Block of Comments As for the AI documentation used Claude to help debug getting git to work
//as well as working throgh syntax errors from habbit writing java code then tansfering over here
//Claude only helped point out that my average array could be shortedned to this current function you see
//I had it as a full sum array and then the averaging

#include <stdio.h>
#include "statistics.h"
#include <math.h>

int main(void)
{


	double a1[] = {2.0, 4.0, 4.0, 4.0, 5.0, 5.0, 7.0, 9.0};
	double a2[] = {1.5, 3.25, 8.0};
	double a3[] = {10.0, 10.0, 10.0, 10.0, 10.0 ,20.0};

	int n1 = sizeof(a1) / sizeof(a1[0]);
	int n2 = sizeof(a2) / sizeof(a2[0]);
	int n3 = sizeof(a3) / sizeof(a3[0]);

	double diff1 = fabs(max_array(a1, n1) - min_array(a1, n1));
	double diff2 = fabs(max_array(a2, n2) - min_array(a2, n2));
	double diff3 = fabs(max_array(a3, n3) - min_array(a3, n3));
	
	printf("the average is : %f\n", average_array(a1, n1));
	printf("the std is : %f\n", std_array(a1, n1));
	printf("the sum is : %f\n", sum_array(a1, n1));
	printf("the max is : %f\n", max_array(a1, n1));
	printf("the min is : %f\n", min_array(a1, n1));
	printf("the difference is : %f\n", diff1);

	printf("the average is : %f\n", average_array(a2, n2));
	printf("the std is : %f\n", std_array(a2, n2));
	printf("the sum is : %f\n", sum_array(a2, n2));
	printf("the max is : %f\n", max_array(a2, n2));
	printf("the min is : %f\n", min_array(a2, n2));
	printf("the difference is : %f\n", diff2);

	printf("the average is : %f\n", average_array(a3, n3));
	printf("the std is : %f\n", std_array(a3, n3));
	printf("the sum is : %f\n", sum_array(a3, n3));
	printf("the max is : %f\n", max_array(a3, n3));
	printf("the min is : %f\n", min_array(a3, n3));
	printf("the difference is : %f\n", diff3);

	return 0;
}
