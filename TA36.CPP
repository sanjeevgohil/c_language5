#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\n Enter first number:");
	scanf("%d",&a);
	printf("\n Enter second number:");
	scanf("%d",&b);
	printf("\n Enter third number:");
	scanf("%d",&c);

	if(a<b&&a<c)
	{
		printf("\n First number is minimum");
	}
	else if(b<a&&b<c)
	{
		printf("\n Second number is minimum");
	}
	else if(c<a&&c<b)
	{
		printf("\n Third number is minimum");
	}
	else
	{
		printf("\n More than one number is minimum");
	}
	getch();
}