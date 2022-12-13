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

	if(a>b&&a>c)
	{
		printf("\n First number is max");
	}
	else if(b>a&&b>c)
	{
		printf("\n Second number is max");
	}
	else if(c>a&&c>b)
	{
		printf("\n Third number is max");
	}
	else
	{
		printf("\n More than one number max");
	}
	getch();
}