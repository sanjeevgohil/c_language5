#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	char a;
	clrscr();
	printf("\n Enter Value :");
	scanf("%c",&a);
	for(i=4;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %c ",a);
		}
		printf("\n");
	}
	for(i=2;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %c ",a);
		}
		printf("\n");
	}
	getch();
}