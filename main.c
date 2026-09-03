//Comment to add space
//Just a block of print statments calling the array functions and doing different things with them
//like getting the size nothing really of not compared to assignment1 same old claude for making
//making sure im not making any syntax errors and understanding c++ error codes

#include <stdio.h>
#include "statistics.h"
#include "output_array.h"

int main(void)
{


	double a1[] = {2.0, 4.0, 4.0, 4.0, 5.0, 5.0, 7.0, 9.0};
	double a2[] = {1.5, 3.25, 8.0};
	double a3[] = {10.0, 10.0, 10.0, 10.0, 10.0 ,20.0};

	int n1 = sizeof(a1) / sizeof(a1[0]);
	int n2 = sizeof(a2) / sizeof(a2[0]);
	int n3 = sizeof(a3) / sizeof(a3[0]);

	output_array(a1, n1);	
	printf("the average is : %f\n", average_array(a1, n1));
	printf("the std is : %f\n", std_array(a1, n1));
	printf("the sum is : %f\n", sum_array(a1, n1));
	printf("the max is : %f\n", max_array(a1, n1));
	printf("the min is : %f\n", min_array(a1, n1));
	printf("the difference is : %f\n", diff(a1, n1));

	output_array(a2, n2);
	printf("the average is : %f\n", average_array(a2, n2));
	printf("the std is : %f\n", std_array(a2, n2));
	printf("the sum is : %f\n", sum_array(a2, n2));
	printf("the max is : %f\n", max_array(a2, n2));
	printf("the min is : %f\n", min_array(a2, n2));
	printf("the difference is : %f\n", diff(a2, n2));

	output_array(a3, n3);
	printf("the average is : %f\n", average_array(a3, n3));
	printf("the std is : %f\n", std_array(a3, n3));
	printf("the sum is : %f\n", sum_array(a3, n3));
	printf("the max is : %f\n", max_array(a3, n3));
	printf("the min is : %f\n", min_array(a3, n3));
	printf("the difference is : %f\n", diff(a3, n3));

	return 0;
}
