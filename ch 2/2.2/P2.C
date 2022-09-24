#include<stdio.h>
#include<conio.h>
main()
{
	const float pi=3.14;
	float r,a;
	clrscr();
	printf("enter radius of circle :- ");
	scanf("%f",&r);
	a=pi*r*r;
	printf("the area of circle     :-%.2f ", a);
	getch();

}

