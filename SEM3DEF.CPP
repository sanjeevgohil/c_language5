#include<iostream.h>
#include<conio.h>
int sum(int a=1,int b=2,int c=3,int d=4)
{
	return a + b + c + d;
}

void main()
{
	clrscr();
	cout<<"\n Total is:"<<sum();
	cout<<"\n Total is:"<<sum(10);
	cout<<"\n Total is:"<<sum(10,20);
	cout<<"\n Total is:"<<sum(10,20,30);
	cout<<"\n Total is:"<<sum(10,20,30,40);
	getch();
}