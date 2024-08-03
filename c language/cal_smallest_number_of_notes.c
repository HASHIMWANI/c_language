
//calculating smallest number of  notes
#include<stdio.h>
int main()
{
	int amount, no_hun,no_fifty,no_ten,no_five,no_two,no_one,total;
	printf("enter the amount");
	scanf("%d",&amount);
	no_hun=amount/100;
	amount=amount%100;
	no_fifty=amount/50;
	amount=amount%50;
	no_ten=amount/10;
	amount=amount%10;
	no_five=amount/5;
	amount=amount%5;
	no_two=amount/2;
	amount=amount%2;
	no_one=amount/1;
	amount=amount%1;
	total=no_hun +no_fifty+no_ten+no_five+no_two+no_one;
	printf("the smallest number of notes=%d",total);
	return 0;
	
}

