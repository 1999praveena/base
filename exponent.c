#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c=1;
printf("enter num:");
scanf("%d",&a);
printf("\nenter power:");
scanf("%d",&b);
while(b!=0)
{
c*=a;
--b;
}
printf("\nthe power is %d",c);
getch();
return 0;
}
