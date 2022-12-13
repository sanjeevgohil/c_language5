#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int *a;
	int i,n;
	clrscr();
	printf("\nEnter Number for input:");
	scanf("%d",&n); //5

	a=(int *)malloc(n * sizeof(int));

	for(i=0;i<n;i++)
	{
		printf("\nEnter Number:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\nNumber is:%d",a[i]);
	}
	getch();
}

