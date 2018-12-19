#include<stdio.h>
#include<conio.h>
void main()
{
char b[100];
int numeric;
printf("Enter the character");
scanf("%c",&b);
while(b[i]!="\0")
{
if(b[i]>"0"&&b[i]<="9")
{
numeric++;
}
}
printf("number of numeric value is %d",numeric);
getch();
}
