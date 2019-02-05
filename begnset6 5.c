#include<stdio.h>
#include<conio.h>
void main()
{
int n,l=0;
clrscr();
scanf("%d",&n);
while(n)
{
n=n/10;
l++;
}
printf("%d",l);
getch();
}
