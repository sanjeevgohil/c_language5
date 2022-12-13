#include<stdio.h>
#include<conio.h>
void main()
{
	float q,r,tot,dis=0;
	clrscr()
	printf("\n Enter quantity:");
	scanf("%f",&q);
	printf("\n Enter Rate:");
	scanf("%f",&r);

	tot= q*r;

	if(tot>=1000)
	{
		dis= tot*5/100;
	}

	tot= tot-dis

	print  ("\n discount is :%9.2f",dis);
	printf ("\n total amt   :%9.2f",tot);
	getch();

}


