#include<iostream.h>
#include<conio.h>

int a=20;

void main()
{
	int a=10;
	clrscr();
	cout<<"\n local variable a is :"<<a;
	cout<<"\n global variable a is :"<<::a;

	getch();
}