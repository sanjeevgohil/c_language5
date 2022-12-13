
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char*nm="Edu",*nm1="Education",*nm2;
	clrscr();
	fflush(stdin);
	nm2=strstr(nm1,"cation");
	puts(nm2);

	strcat(nm,nm2);
	printf("\n Name is:");
	puts(nm);
	getch();
}