#include<stdio.h>
#include<conio.h>
void input(int[]);
void output(int[]);
void main()
{
	int a[10];
	clrscr();
	input(a);
	output(a);
	getch();
}
void input(int a[])
{
	int i;
	for(i=0;i<=9;i++)
	{
		printf("\nEnter Number:");
		scanf("%d",&a[i]);
	}

}
void output(int a[])
{
	int i;

	for(i=0;i<=9;i++)
	{
		printf("\nNumber is:%d",a[i]);
	}
}


