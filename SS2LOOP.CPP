#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
		if(i%2==0)
		{
			printf(" # ");

		}
		else
		{
			printf(" * ");
		}
		for(j=1;j<=5;j++)
		{
			printf(" %d", j);
		}
		printf("\n");
	}
	getch();
}