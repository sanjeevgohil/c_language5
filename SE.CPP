#include<iostream.h>
#include<conio.h>
#define size 10
int i,a[size],j,temp;
void sum(int a[])
{
	for(i=0;i<=9;i++)
	{
		for(j=i+1;j<=9;j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
void main()
{
	clrscr();
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter Number:";
		cin>>a[i];
	}
	sum(a);
	for(i=0;i<size;i++)
	{
		cout<<"\nNumber is:"<<a[i];
	}
	getch();
}