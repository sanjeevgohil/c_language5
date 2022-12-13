#include<stdio.h>
#include<conio.h>
void main()
{
	int i,fact=1,n;
	clrscr();
	printf("\n Enter number:");
	scanf("%d",&n);

	i=1;
	do
	{
		fact=fact*i;
		i=i+1;
	}while(i<=n);
	printf("\n Factorial value is:%d",fact);
	getch();
}