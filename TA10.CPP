#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\n Enter first number:");
	scanf("%d",&a);
	printf("\n Enter Secound number:");
	scanf("%d",&b);

	c=a*b;

	printf("\n First number is:%d",a);
	printf("\n Secound number is:%d",b);
	printf("\n Multiple is:%d",c);
	getch();
}