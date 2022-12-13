#include<iostream.h>
#include<conio.h>

void main()
{
	int a,b,c,ans=0;
	clrscr();
	cout<<"\n enter 1st no";
	cin>>a;
	cout<<"\n enter 2nd no";
	cin>>b;

	cout<<"\n 1.add";
	cout<<"\n 2.sub";
	cout<<"\n 3.multi";
	cout<<"\n 4.div";
	cin>>c;

	switch(c)
	{
		case 1:
			ans=a+b;
			break;
		case 2:
			ans=a-b;
			break;
		case 3:
			ans=a*b;
			break;
		case 4:
			ans=a/b;
			break;
		default:
			cout<<"\n wrong choise....";
	}
	cout<<"\n ans is"<<ans;

	getch();
}






