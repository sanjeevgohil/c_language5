#include<iostream.h>
#include<conio.h>
int& min(int &x,int &y)
{
	if(x < y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
void main()
{
	int a,b,c;
	clrscr();
	cout<<"\n Enter first no:";
	cin>>a;
	cout<<"\n Enter second no:";
	cin>>b;

	min(a,b)=100;

	cout<<"\n first  no is:"<<a;
	cout<<"\n second no is:"<<b;
	getch();
}