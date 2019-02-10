#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum=0,r;
clrscr();
scanf("%d",&n);
while(n)
{
r=n%10;
sum=sum+r;
n=n/10;
}
printf("%d",sum);
getch();
}
