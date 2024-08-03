
//finding absolute value using if else
#include<stdio.h>
int main()
{
	int num,n;
	printf("enter the number whose absolute value you want to know");
	scanf("%d",&num);
	if(num<0)
	{
	n=num*-1;
	printf("the absolute number is %d",n);
	}
	else
	printf("the number is already absolute");
	return 0;
}

