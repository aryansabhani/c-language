#include<stdio.h>
#include<conio.h>
void main()
{
       int a,b,c;;
       clrscr();
       printf("enter first number = ");
       scanf("%d",&a);

       printf("enter second number = ");
       scanf("%d",&b);

       c=a;
       a=b;
       b=c;

       printf("swapping first number = %d",a);
       printf("swapping second number = %d",b);
       getch();
}
