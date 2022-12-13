#include<stdio.h>
#include<conio.h>
#include<string.h>
struct stud
{
	int rno;
	char nm[20];
	struct mark
	{
		int m1,m2,m3;
	};
	struct mark m;
	int tot;
	float per;
	char res[5];
	char grade;
};
void disp(struct stud s[]);
struct stud s[3];

void main()
{
	int i;
	clrscr();
	for(i=0;i<=2;i++)
	{
		printf("\nEnterrollNo:");
		scanf("%d",&s[i].rno);
		fflush(stdin);
		printf("\nEnter Name :");
		gets(s[i].nm);
		printf("\nEnter mark-1:");
		scanf("%d",&s[i].m.m1);
		printf("\nEnter mark-2:");
		scanf("%d",&s[i].m.m2);
		printf("\nEnter mark-3:");
		scanf("%d",&s[i].m.m3);

		s[i].tot=s[i].m.m1+s[i].m.m2+s[i].m.m3;
		if(s[i].m.m1 >=40 && s[i].m.m2 >=40 && s[i].m.m3 >=40)
		{
			s[i].per=s[i].tot/3.0;
			strcpy(s[i].res,"pass");
			if(s[i].per >=90)
			{
				s[i].grade ='A';
			}
		       else if(s[i].per >=85)
			{
				s[i].grade ='B';
			}
			else if(s[i].per >=75)
			{
				s[i].grade ='C';
			}
			else if(s[i].per >=65)
			{
				s[i].grade ='D';
			}
			else
			{
				s[i].grade ='E';
			}
		}
		else
		{
			s[i].per=0;
			strcpy(s[i].res,"Fail");
			s[i].grade='F';
		}

	}
		disp(s);
}
void disp(struct stud s[])
{
	int i;
	clrscr();
	printf("\n\t\t STDUENT REPORT\n");
	printf("\nRollNo\tName\tmark-1\tmark-2\tmark-3\tTotal\tper\tres\tgrade\n");
	for(i=0;i<=2;i++)
	{
		printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%s\t%c\t%2f",s[i].rno,s[i].nm,s[i].m.m1,s[i].m.m2,s[i].m.m3,s[i].m.m3,s[i].tot,s[i].per,s[i].res,s[i].grade);
	}
	getch();
}
