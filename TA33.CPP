#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\n Enter first number is a:");
	scanf("%d",&a);
	printf("\n Enter secound number is b:");
	scanf("%d",&b);
	printf("\n Enter third number is c:");
	scanf("%d",&c);

	if(a>b&&a>c);
	{
		printf("\n First number is max");
	}
	if(b>a&&b>c);
	{
		printf("\n Second number is max");
	}
	if(c>a&&c>b);
	{
		printf("\n Third number is max");
	}
	getch();

}