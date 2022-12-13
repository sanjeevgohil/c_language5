#include<stdio.h>
#include<conio.h>
void main()
{
	float s,b,ns;
	clrscr();
	printf("\n Enter salary :");
	scanf("%f",&s);

	b=s*10/100;
	ns=s+b;

	printf("bonus is :%.2f",&b);
	printf("net salary is :%.2f",&ns);
	getch();
}