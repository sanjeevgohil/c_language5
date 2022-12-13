#include<stdio.h>
#include<conio.h>
void main()
{
	float u,uc,gt,fc,mr,total;
	clrscr();
	printf("\n Enter unit");
	scanf("%f",&u);

	if (u<=50)
	{
		uc=0.50*u;
	}
	else if(u<=100)
	{
		uc=(50*0.50)+(u-50);
	}
	else if(u<=200)
	{
		uc=(50*0.50)+(50*0.75)+((u-100)*1);
	}
	else
	{
	uc=(50*0.50)+(50*0.75)+(100*1)+((u-200)*1.20);
	}

	gt=uc*40/100;
	fc=(uc+gt)*10/100;
	mr=25;
	total=uc+gt+fc+mr;

	printf("\n unit charge:%9.2f",uc);
	printf("\n government tax:%9.2f",gt);
	printf("\n full charge:%9.2f",fc);
	printf("\n meter rent:%9.2f",mr);
	printf("\n =====================");
	printf("\n Total:%9.2f",total);
	getch();
}
