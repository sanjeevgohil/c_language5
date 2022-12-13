#include<stdio.h>
#include<conio.h>
void main()
{
	float p,r,n,si;
	clrscr();
	printf("\n enter amount:");
	scanf("%f",&p);
	printf("\n enter rate:");
	scanf("%f",&r);
	printf("\n enter years:");
	scanf("%f",&n);

	si=p*r*n/100;

	printf("\n simple intrest:%2f",si);
	getch();
}
