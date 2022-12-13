#include<iostream.h>
#include<conio.h>
int sum(int a,int b,int c,int d)
{
	return a + b + c + d;
}
int sum(int a,int b)
{
	return a + b;
}

void main()
{
	int a=10,b=20,c=30,d=40;
	clrscr();
	cout<<"\n Total is:"<<sum(a,b,c,d);
	cout<<"\n Total is:"<<sum(a,b);
	getch();
}