#include<stdio.h>
int main()
{
	float INR,USD;
	printf("Enter the amount in indian currency:");
	scanf("%f",&INR);
	USD=INR/76.23;
	printf("\n%f is in USD.",USD);
}