#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("\n Enter number:");
	scanf("%d",&n);

	i=1;
	do
	{
		printf("\n Number is:%d",i);
		i++;
	}while(i<=n);
	getch();
}