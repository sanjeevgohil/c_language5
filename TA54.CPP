#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("\n Enter number:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("\n Number is:%d",i);
	}
	getch();
}