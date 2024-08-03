
//calculation of ramesh's gross salary
#include<stdio.h>
int main()
{
float basic_salary,hra,da,gross_salary;
printf("enter basic salary of ramesh \n");
scanf("%f",&basic_salary);
hra=0.4*basic_salary;
da=0.2*basic_salary;
gross_salary=basic_salary+hra+da;
printf("the gross salary of ramesh is %f",gross_salary);
return 0 ;
}

