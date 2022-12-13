#include<iostream.h>
#include<conio.h>
void swap(int *x,int *y)
{
	int c;
	c=*x;
	*x=*y;
	*y=c;
}
void main()
{
	int a,b,c;
	clrscr();
	cout<<"\n Enter first no:";
	cin>>a;
	cout<<"\n Enter second no:";
	cin>>b;
	swap(&a,&b);

	cout<<"\n first no is:"<<a;
	cout<<"\n second no is:"<<b;
	getch();
}