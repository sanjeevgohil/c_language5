#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\n Enter first number");
	scanf("%d",&a);
	printf("\n Enter second number");
	scanf("%d",&b);
	printf("\n Enter third number");
	scanf("%d",&c);

	if(a>b)
	{
		if(a>c)
		{
			printf("\n First number is max");
		}
	}
	else
	{
		if(a>c)
		{
			printf("\n Second number is max");
		}
		else
		{
			printf("\n Third number is max");
		}
	}
	getch();
}
