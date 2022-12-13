//single inheritance
#include<iostream.h>
#include<conio.h>
class A
{
	public:
	void dispA(void)
	{
		cout<<"\nClass A";
	}
};
class B : public A
{
	public:
	void dispB(void)
	{
		cout<<"\nClass B";
	}
};
void main()
{
	clrscr();
	B b1;
	b1.dispA();
	b1.dispB();
	getch();
}
