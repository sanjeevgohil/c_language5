#include<stdio.h>
#include<conio.h>
void main()
{
	int ch,n,i,ans;
	do
	{
	clrscr();
	printf("\n1.	Only Table ");
	printf("\n2.	Table with 1 Plus");
	printf("\nEnter Your Choice :");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			i=1;
			printf("Enter value :");
			scanf("%d",&n);
			A:
			printf("\n%d * %d\t = %d\t",i,n,i*n);
			i++;
			if(i<=10)
			{
				goto A;
			}
			break;
		case 2:
			i=1;
			printf("Enter value :");
			scanf("%d",&n);
			B:
			printf("\n%d * %d\t = %d\t\t%d",i,n,i*n,i*n+1);
			i++;
			if(i<=10)
			{
				goto B;
			}
			break;
		default:
			printf("\nWrong Choice... \n\t Try Againg ");
	}
	printf("\n\n\t\tEnter [0 to exit] :+");
	printf("\n\n\t\tDo You Want To Continue Press [1] : ");
	scanf("%d",&ans);
	}while(ans == 1);
	getch();
}