
//program to calculate the sum of the five digit numbers
#include<stdio.h>
int main()
{
	int num,d5,d4,d3,d2,d1,sum;
	printf("enter the five digit number");
	scanf("%d",&num);
	d5=num%10;
	num=num/10;
	d4=num%10;
	num=num/10;
	d3=num%10;
	num=num/10;
	d2=num%10;
	num=num/10;
	d1=num%10;
	sum=d1+d2+d3+d4+d5;
	printf("the sum of the five digit number entered=%d",sum);
	return 0;

}

