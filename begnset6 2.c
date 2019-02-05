#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,n;
clrscr();
scanf("%d%d",&a,&b);
n=a*b;
if(n%2==0)
printf("even");
else
printf("odd");
getch();
}
