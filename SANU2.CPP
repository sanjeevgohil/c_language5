#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	char *nm;
	int i,j;
	clrscr();
	printf("\n String :");
	scanf("%[^\n]",nm);
	for(i=0;nm[i]!='\0';i++)
	{
		for(j=0;j<=i;j++)
		{
			delay(700);
			textcolor(i+1000);
			cprintf(" %c ",nm[j]);
		}
		printf("\n");
	}
	getch();
}