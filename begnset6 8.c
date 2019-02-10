#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,l=0,c=0;
clrscr();
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]!='.'&&a[i]!=','&&a[i]!='$'&&a[i]!='*'&&a[i]!='@')
{
if(a[i]>=97&&a[i]<=122||a[i]>=65&&a[i]<=90||a[i]>=47&&a[i]<=58)
c++;
}
}
for(i=0;a[i]!='\0';i++)
{
if(a[i]!='.'&&a[i]!=','&&a[i]!='$'&&a[i]!='*'&&a[i]!='@')
l++;
}
if(c==l)
printf("yes");
else
printf("no");
getch();
}
