#include<stdio.h>
#include<conio.h>
void main()
{
	int no,a;
	clrscr();
	printf("\n Enter a number:");
	scanf("%d",&no);

	if(no>0)
	{
		printf("\n Number is positive");
	}
	else
	{
		printf("\n Number is negative");
	}
	getch();
}

