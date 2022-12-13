#include<stdio.h>
#include<conio.h>
#define size 10

int stack[size],tos=-1;

void push(int no);
void pop(void);
void peep(void);


void main()
{
	int ch,no;
	while(1)
	{
		clrscr();
		printf("\n\t\t S T A C K - O P E R A T I O N \n");

		printf("\n1.	Insert");
		printf("\n2.	Remove");
		printf("\n3.	Display");
		printf("\n4.	Exit");
		printf("\n\n\tEnter Your Choice:");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				printf("\nEnter Number:");
				scanf("%d",&no);
				push(no);
				break;
			case 2:
				pop();
				break;
			case 3:
				peep();
				break;
			case 4:
				printf("\nGood Bye..");
				getch();
				goto END;
			default:
				printf("\nWrong Choice...Try Again...");
		}
	}
	END:
}
void push(int no)
{
	if(tos == size-1)
	{
		printf("\nStack is Overfolw");
	}
	else
	{
		tos++;
		stack[tos]=no;
		printf("\nElement Inserted");
	}
	peep();
}
void pop(void)
{
	if(tos == -1)
	{
		printf("\nStack is Empty");
		getch();
	}
	else
	{
		printf("\n%d Element Remove from stack",stack[tos]);
		tos--;
		peep();
	}
}
void peep(void)
{
	int i;
	if(tos == -1)
	{
		printf("\nStack is Empty...");
	}
	else
	{
		printf("\n");
		for(i=0;i<=tos;i++)
		{
			printf("%d->",stack[i]);
		}
	}
	getch();
}