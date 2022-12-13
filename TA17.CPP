#include<stdio.h>
#include<conio.h>
void main()
{
	float a,q,r;
	clrscr();
	printf("\n Enter quantity:");
	scanf("%f",&q);
	printf("\n Enter rate:");
	scanf("%f",&r);
	a=q*r;
	printf("\n The amount is:%2f",a);

	getch();
}