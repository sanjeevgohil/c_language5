#include<iostream.h>
#include<conio.h>

int a =20;

void main()
{
	int a=10;
	clrscr();
	cout<<"\n local var. A is :"<<a;
	cout<<"\n global var. a is :"<<::a;
	cout<<"\n total is :"<<::a+a;
	cout<<"\n total is :"<<a+a;
	cout<<"\n total is :"<<::a+::a;

	getch();
}

