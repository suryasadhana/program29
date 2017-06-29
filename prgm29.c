#include<stdio.h>
#include<conio.h>
void main()
{
int i,num,sum=0;
clrscr();
scanf("%d",&num);
for(i=0;i<=num;i++)
{
sum=sum+i;
}
printf("%d",sum);
getch();
}
