#include<iostream.h>
#include<conio.h>
inline int sum(int a,int b)
{
	return a+b;
}
void main()
{
	int a=10,b=20,c;
	clrscr();
	c=sum(a,b);
	cout<<"\n Total is:"<<c;
	getch();
}