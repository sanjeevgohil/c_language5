#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	clrscr();
	printf("\n Enter your age:");
	scanf("%d",&age);


	if(age>=18)
	{
		printf("\n Person is eligible for voting");
	}
	else
	{
		printf("\n Person is noteligible for voting");
	}
	getch();
}

