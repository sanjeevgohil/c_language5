#include<iostream.h>
#include<conio.h>
class abc
{
	int a,b,c;
	public:
	void input(void)
	{
		cout<<"\n Enter first no:";
		cin>>a;
		cout<<"\n Enter second no:";
		cin>>b;
	}
	int process(void)
	{
		c= a + b;
		return c;
	}

};
void main()
{
	abc a1;
	int c;
	clrscr();
	a1.input();
	c=a1.process();
	cout<<"\n Total is:"<<c;
	getch();
}