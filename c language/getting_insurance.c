
//insurance of drivers 
#include<stdio.h>
int main()
{
	char sex,ms;
	int age;
	printf("enter age sex and martial status");
	scanf("%d %c %c",&age,&sex,&ms);
	if ((ms=='M')||(ms=='U'&& sex=='M'&& age>30)||(ms=='U'&&sex=='F' &&age>25))
	printf("the driver should be insured");
	else
	printf("the driver should  not be insured");
	return 0;
	
}

