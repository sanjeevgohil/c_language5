#include<stdio.h>
#include<conio.h>
void main()
{
	float salary,bonus,total;
	clrscr();
	printf("\n enter salary:");
	scanf("%f",&salary);

	bonus=salary*10/100;
	total=bonus+salary;

	printf("\n bonus is:%f",bonus);
	printf("\n salary is:%2f",total);
	getch();
}
