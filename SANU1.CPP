#include<stdio.h>
#include<conio.h>
void main()
{
	char nm[10];
	int i,j;
	clrscr();
	printf("\n Enter Name :");
	scanf("%s",&nm);
	for(i=0;nm[i]!='\0';i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" %c ",nm[j]);
		}
		printf("\n");
	}
	getch();
}