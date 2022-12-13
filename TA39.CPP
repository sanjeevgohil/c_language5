#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("\n Enter number here:");
	scanf("%d",&a);

	if(a>0)
	{
		printf("\n Given number is positive");
	}
	else if(a<0)
	{
		printf("\n Given number is negative");
	}
	else
	{
		printf("\n Given number is zero");
	}
	getch();
}
