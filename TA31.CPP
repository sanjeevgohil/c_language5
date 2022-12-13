#include<stdio.h>
#include<conio.h>
void main()
{
	float s,b,n,ns;
	clrscr();
	printf("\n Enter salay");
	scanf("%f",&s);

	if (s<5000)
	{
		b=s*10/100;
	}
	ns=s+b;
	printf("\n Salaray is:%9.2f",s);
	printf("\n Bonus is:%9.2f",b);
	printf("\n =================");
	printf("\n Net salary is:%9.2f",ns);
	getch();
}

