
//calculating all trigo ratios
#include<stdio.h>
#include<math.h>
int main()
{
	float angle,s,c,t;
	printf("Enter any angle");
	scanf("%f",&angle);
	angle=angle*3.14/180;//to convert in radians
	s=sin(angle);
	c=cos(angle);
	t=tan(angle);
	printf("the trigo ratios are %f%f%f",s,c,t);
	return 0;

	
}

