#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,a[3][3][3];
	clrscr();
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			for(k=0;k<=2;k++)
			{
				printf("Enter Number");
				scanf("%d",&a[i][j][k]);
			}
		}
	}
	for(i=0;i<=2;i++)
	{   	 for(j=0;j<=2;j++)
		{
			for(k=0;k<=2;k++)
			{
				printf(" %2d ",a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n\n");
	}
	getch();
}


