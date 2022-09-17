#include<stdio.h>
int main()
{
	int num1,num2,t;
	
	printf("enter the value of a:");
	scanf("%d",&num1);
	
	printf("\nenter the value of b:");
	scanf("%d",&num2);
	
	t=num1;
	num1=num2;
	num2=t;
	
	printf("a=%d,b=%d ",num1,num2);
	
}