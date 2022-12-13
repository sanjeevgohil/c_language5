#include<stdio.h>
#include<conio.h>
void main()
{
	int i,s,e;
	clrscr();
	printf("\n Enter starting number:");
	scanf("%d",&s);
	printf("\n Enter ending number:");
	scanf("%d",&e);

	for(i=1;i<=e;i=i+1)
	{
		printf("\n Number is:%d",i);
	}
	getch();
}