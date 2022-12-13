#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int *a;
	int i,n;
	clrscr();

	n=5;

	a=(int*)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		a[i]=i+1;
	}
	for(i=0;i<n;i++)
	{
		printf("\nNumberis:%d",a[i]);
	}
	n=10;
	printf("\nAfter reallocate:\n");
	a=(int *)realloc(a,n *sizeof(int));
	for(i=5;i<n;i++)
	{
		a[i]=i+1;
	}
	for(i=0;i<n;i++)
	{
		printf("\nNumber is:%d",a[i]);
	}
	free (a);
	a=NULL;
	getch();
}