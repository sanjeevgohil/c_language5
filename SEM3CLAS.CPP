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
		cout<<"\n Enrer second no:";
		cin>>b;
	}
	void process(void)
	{
		c=a+b;
	}
	void output(void)
	{
		cout<<"\n Total is:"<<c;
	}
};
void main()
{
	abc a1;
	clrscr();
	a1.input();
	a1.process();
	a1.output();
	getch();

}