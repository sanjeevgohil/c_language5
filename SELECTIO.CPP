#include<iostream.h>
#include<conio.h>
#define size 10
void main()
{
	int a[size],i,j,temp;
	clrscr();
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter Number:";
		cin>>a[i];
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<=9;j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		cout<<"\nNumber is:"<<a[i];
	}
	getch();
}