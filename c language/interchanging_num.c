
//interchanging of numbers
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the numbers:\n");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("the interchanged numbers  are %d %d",a,b);
	return 0;
	
}

