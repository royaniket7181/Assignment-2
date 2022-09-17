#include<stdio.h>
int main()
{
	int num,p;
	printf("\n Enter a number:");
	scanf("%d",&num);
	
	p=num/10;
	p=p*10;
	printf("\n %d is the final number",p);
}