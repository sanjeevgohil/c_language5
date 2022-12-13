#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	clrscr();
	for(i=1; i<=5; i++)
	{
		k=i%2==0? 2:1;
		for(j=1; j<=5; j++)
		{
			k%2==0? printf("#"):printf("*");
			k++;
		}
		printf("\n");
	}
	getch();
}