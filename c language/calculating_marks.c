
//calculation of aggregate marks and percentage of marks obtained by the student
#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,aggr;
	float per;
	printf("enter the marks in all the five subjects");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	aggr=m1+m2+m3+m4+m5;
	per=aggr/5;
	printf("the aggregate marks obtained=%d\n and percentage of marks obtained=%f",aggr,per);
	return 0;
	
}

