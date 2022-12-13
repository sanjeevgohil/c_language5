#include<stdio.h>
#include<conio.h>
void main()
{
	int i,tot=0;
	clrscr();
	i=1;
	while(i<=10)
	{
		printf("\n Number is:%d",i);
		tot=tot+i;
		i=i+1;
	}
	printf("\n total is:%d",tot);
	getch();
}