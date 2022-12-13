#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define NULL 0
struct node
{
	int data;
	struct node *link;
};
struct node *p=NULL;
void create(int);
void addbeg(int);
void addbet(int,int);
void display(void);
void delfirst(void);
int dellast(void);
int delnode(int);
void sort(void);
void search(int);
void reverse(void);
void main()
{
	int ch,no,pos,flag;
	while(1);
	{
		START:
		clrscr();
		printf("\nSingly Link List:");
		printf("\n1.	Add Node:");
		printf("\n2.	Display Node:");
		printf("\n3.	Delete Node:");
		printf("\n4.	Search:");
		printf("\n5.	Sorting:");
		printf("\n6.	Reverse:");
		printf("\n0.	Exit");
		printf("\n\n\tEnter Your Choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				while(1)
				{
					clrscr();
					printf("\nAdd Node in Singly Link List \n");
					printf("\n1.	Create - Defualt End");
					printf("\n2.	Add Begning");
					printf("\n3.	Add Between");
					printf("\n0.	Go To Main");
					printf("\n\n\tEnter Your Choice:");
					scanf("%d",&ch);
					switch(ch)
					{
						case 1:
							printf("\nEnter Number:");
							scanf("%d",&no);
							create(no);
							break;
						case 2:
							printf("\nEnter First Node Number:");
							scanf("%d",&no);
							addbeg(no);
							break;
						case 3:
							printf("\nEnter Between Node Number:");
							scanf("%d",&no);
							printf("\nEnter Position:");
							scanf("%d",&pos);
							addbet(no,pos);
							break;
						case 0:
							goto START;
						default:
							printf("\nWrong Choice...Try Again");
							getch();
					}
				}
				case 2:
					printf("\nNode Display:\n");
					display();
					break;
				case 3:
					while(1)
					{
						clrscr();printf("\n\tDelete Node in Singly Link List \n");
						printf("\n1.	Delete First");
						printf("\n2.	Delete");
						printf("\n3.	Delete Last:");
						printf("\n0.  GoTo Main	:");
						printf("\n\n\tEnter Your Choice:");
						scanf("%d",&ch);
						switch(ch)
					}
		}
	}
}