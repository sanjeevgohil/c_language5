#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
struct stud
{
	int rno;
	char nm[20];
	int m1,m2,m3,tot;
	float per;
	char res[10];
};
void main()
{
	struct stud s[3];
	int i;
	clrscr();
	for(i=0;i<=2;i++)
	{
		cout<<"\nEnter Roll No:";
		cin>>s[i].rno;
		fflush(stdin);
		cout<<"\nEnter Name:";
		gets(s[i].nm);
		cout<<"\nEnter Mark-1:";
		cin>>s[i].m1;
		cout<<"\nEnter Mark-2:";
		cin>>s[i].m2;
		cout<<"\nEnter Mark-3:";
		cin>>s[i].m3;
		s[i].tot=s[i].m1+s[i].m2+s[i].m3;
		if(s[i].m1>=40 && s[i].m2>=40 && s[i].m3>=40)
		{
			s[i].per=(float)s[i].tot/3;
			strcpy(s[i].res,"Pass");
		}
		else
		{
			s[i].per=0;
			strcpy(s[i].res,"Fail");
		}
	}
	clrscr();
	cout<<"\n\t\t\t STUDENT INFORMATION \n";
	cout<<"\nrno\tnm\tm1\tm2\tm3\ttot\tper\tres\n";
	for(i=0;i<=2;i++)
	{
		cout<<endl<<s[i].rno<<'\t'<<s[i].nm<<'\t'<<s[i].m1<<'\t'<<s[i].m2<<'\t'<<s[i].m3<<'\t'<<s[i].tot<<'\t'<<s[i].per<<s[i].res;
	}
	getch();
}