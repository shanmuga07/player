#include<stdio.h>

#include<conio.h>
void main()

{


int m=1,n,i;

printf("enter no ");


scanf("%d ",&n);

for(i=2;i<=n;i++)

{
m=m*i;
}
printf("%d",m);

getch();
}
