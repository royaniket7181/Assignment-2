#include<stdio.h>
int main()
{
	int num,a;
	
	printf("Enter a number to be checked:");
	scanf("%d",&num);
	
	if(num&1==1)
	{
		printf("%d is an odd num.",num);
	}
	else
	printf("%d is an even",num);
	
}