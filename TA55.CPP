#include<stdio.h>
#include<conio.h>
void main()
{
	int i,tot=0;
	clrscr();
	for (i=1;i<=10;i=i+1)
	{
		printf("\n Number is:%d",i);
		tot=tot+i;
	}
	printf("\n total is:%d",tot);
	getch();
}