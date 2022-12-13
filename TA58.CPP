#include<stdio.h>
#include<conio.h>
void main()
{
	int i,fact=1,n;
	clrscr();
	printf("\n Enter number:");
	scanf("%d",&n);

	for(i=1;i<=n;i=i+1)
	{
		fact=fact*i;
	}
	printf("\n Factorial value is:%d",fact);
	getch();
}