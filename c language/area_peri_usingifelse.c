
//program to find whether the area of the triangle is greater than its perimeter
#include<stdio.h>
int main()
{
	int len,brdth;
	int area,perimeter;
	printf(" Enter the length and breadth of the rectangle ");
	scanf("%d%d",&len,&brdth);
	area=len*brdth;
	perimeter=2*(len+brdth);
	if(area>perimeter)
	printf("the area of rectangle is greater than the perimeter");
	else 
	printf("the area of the rectangle is less than the perimeter");
	return 0;
}


