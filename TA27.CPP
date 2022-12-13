#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\n Enter value of A:");
	scanf("%d",&a);
	printf("\n Enter value of B:");
	scanf("%d",&b);

	if (a>b)
	{
		printf("\n A is max");
	}
	else
	{
		printf("\n B is max");
	}
	getch();
}
