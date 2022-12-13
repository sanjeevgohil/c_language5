#include<stdio.h>
#include<conio.h>
void main()
{
	int no;
	clrscr();
	printf("\n Enter number");
	scanf("%d",&no);

	if(no%2==0)
	{
		printf("\n Number is even");
	}
	else
	{
		printf("\n Number is odd");
	}
	getch();
}

