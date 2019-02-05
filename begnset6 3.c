#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,n,k,f=0;
clrscr();
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==k)
f=1;
}
if(f==1)
printf("yes");
else
printf("no");
getch();
}
