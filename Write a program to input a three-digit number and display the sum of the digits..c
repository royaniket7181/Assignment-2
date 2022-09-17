#include<stdio.h>
int main()
{
	int num,p,sum=0;
	printf("Enter a three digit number:");
	scanf("%d",&num);
	
	p=num%10;
	sum=sum+p;
	num=num/10;
	
	
	p=num%10;
	sum=sum+p;
	num=num/10;
	
	p=num%10;
	sum=sum+p;
	num=num/10;
	
	printf("\n%d is the sum of digits.",sum);
}