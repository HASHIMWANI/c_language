
//
#include<stdio.h>
int main()
{
	int i,x;
	for(i=1;i<=3;i++)
	{
		printf("enter a even number ");
		scanf("%d",&x );
		if (x%2==0)
		break;
	}
	if (i==4)
	printf("you lose");
	else 
	printf("you win");
	return 0;
}

