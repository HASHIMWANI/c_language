
//dteermining the youngest of the children
#include<stdio.h>
int main()
{
  int age_r,age_s,age_a;
  printf("enter the ages of ram shyam and ajay:\n");
  scanf("%d %d %d",&age_r,&age_s,&age_a);
  if(age_r<age_s)
  {
  	if(age_r<age_a)
  	printf("ram is the youngest");
	  }
	  if(age_s<age_a)
	  {
	  	if(age_s<age_r)
	  	printf("shyam is the youngest");
	   } 
	   else 
	   printf("ajay is the youngest");
  	
  
	return 0;
}

