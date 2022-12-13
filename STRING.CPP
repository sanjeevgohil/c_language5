#include<iostream.h>
#include<conio.h>
#include<string.h>
class abc
{
	char *str;
	int size;
	public:
	abc(){}
       //	abc (char nm[])
	void input(char nm[])
	{
		size=strlen(nm);
		str=new char[size];
		strcpy(str,nm);
	}
	void disp()
	{
		cout<<"\n string is:"<<str;
	}
	abc operator+(abc t1)
	{
		abc temp;
		temp.size=strlen(str) + strlen(t1.str) + 1;
		temp.str=new char(temp.size);
		strcpy(temp.str,str);
		strcat(temp.str," ");
		strcat(temp.str,t1.str);
		return temp;
	}
};
void main()
{
	clrscr();
	abc a1,a2,a3;
	a1.input("Mulla");
	a2.input("Shahnavaj");

	a3=a1+a2;
	a1.disp();
	a2.disp();
	a3.disp();
	getch();
}