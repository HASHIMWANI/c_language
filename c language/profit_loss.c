
//calculation of profit or loss
#include<stdio.h>
int main()
{
	float sp,cp,prof_loss;
	printf("\nenter the selling price and cost price of the items ");
	scanf("%f%f",&sp,&cp);
	prof_loss=sp-cp;
	if(prof_loss>0)
	printf("the seller has made a profit");
	if(prof_loss<0)
	printf("the seller has made a loss");
	if(prof_loss==0)
	printf("the seller has made neither a profit nor a loss");
	return 0;
	
}

