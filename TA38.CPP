#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("\n Enter number:");
	scanf("%d",&a);

	if (a>0)
	{
		if(a==0)
		{
			printf("\n number is zero");
		}
		else
		{
			printf("\n number is positive");
		}
	}
	else
	{
		printf("\n Number is negative");
	}
	getch();
}