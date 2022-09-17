#include<stdio.h>
int main()
{
	int p,num,digit;
	printf("\nEnter a number:");
	scanf("%d",&num);
	printf("\nEnter a single digit number:");
	scanf("%d",&digit);
	p=num*10+digit;
	printf("\nFinal number:%d",p);
}