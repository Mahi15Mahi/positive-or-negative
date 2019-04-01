#include<stdio.h>
int main()
{
char ch;
printf("enter the alphabet:");
scanf("%c",&ch);
if( (ch>='a' && ch<='z') || (ch>='A' && ch>='Z'))
printf("The entered character %c is an alphabet,ch);
else
printf("The entered character %c is not an alphabet,ch);
return 0;
}
