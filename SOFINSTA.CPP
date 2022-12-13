#include<stdio.h>
#include<conio.h>
void disp(void);
void main()
{
	clrscr();
	disp();
	disp();
	disp();
	getch();
}
void disp(void)
{
	static int i=1;
	printf("\n value of 1 is:%d",i);
	i=i+1;
}