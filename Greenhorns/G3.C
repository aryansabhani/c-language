#include<stdio.h>
#include<conio.h>
void main()
{
       float cel,fer;
       clrscr();

       printf("enter temperature in celsius : ");
       scanf("%f",&cel);

       printf("temperature in fahrenheit is : %.1f",(cel*1.8)+32);

       getch();
}




