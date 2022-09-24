#include<stdio.h>
#include<conio.h>
main()
{
   int bs,hra,da,ta,ans;
   clrscr();
   printf("enter you base salary :- ");
   scanf("%d",&bs);
   hra=(10*bs)/100;
   da=(5*bs)/100;
   ta=(8*bs)/100;
   ans=bs+hra+da+ta;
   printf("\nyour gross salary is %d",ans);
   getch();
}