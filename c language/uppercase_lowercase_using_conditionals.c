
//checking whether the character entered through the keyboard is lower case and is it a special symbol or not
#include<stdio.h>
int main()
{
	char ch;
	printf("\nenter a character from the keyboard");
	scanf("%c",&ch);
	( ( ch >= 0 && ch <= 47 ) || ( ch >= 58 && ch <= 64 ) ||( ch >= 91 && ch <= 96 ) || ( ch >= 123 )?printf ( "Character entered is a special symbol\n" )
	:printf ( "Character entered is not a special symbol\n" ) );
	return 0;
}

