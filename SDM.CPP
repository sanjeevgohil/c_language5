#include<iostream.h>
#include<conio.h>
class Abc
{
	static int a;
	public:
	void setval(int i)
	{
		a = i;
	}
	void disp(void)
	{
		cout<<"\nValue of A is:"<<a;
	}
};
int Abc :: a=0;
void main()
{
	clrscr();
	Abc a1,a2,a3;
	a1.setval(10);
	a1.disp();
	a2.setval(100);
	a3.disp();

	getch();
}