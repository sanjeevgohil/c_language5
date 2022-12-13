


#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n;
	clrscr();
	printf("Enter value :");
	scanf("%d",&n);
	A:
	printf("\n%d",i*n);
	i++;
	if(i<=10)
	{
		goto A;
	}
	else
	{
		goto B;
	}
	B:
	printf("\n\nThenk you...");
	getch();
}






