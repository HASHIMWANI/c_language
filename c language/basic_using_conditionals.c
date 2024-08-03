
//checking whether the character entered through the keyboard is lower case and is it a special symbol or not
#include<stdio.h>
int main()
{
	char ch;
	printf("\nenter a character from the keyboard");
	scanf("%c",&ch);
	(ch>=97 && ch<=122?printf("its a lower case alphabet"):printf("the character is not a lower case alphabet"));
	return 0;
}

