#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define NULL 0

struct node
{
	int data;
	struct node * link;
};
struct node *p = NULL;
void craete(int);
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
	while(1)
	{
		START:
		clrscr();
		printf("\nSingly Link List \n");
		printf("\n1.	Add Node:");
		printf("\n2.	Display Node:");
		printf("\n3.	Delete Node:");
		printf("\n4.	Search:");
		printf("\n5.	Sorting:");
		printf("\n6.	Reverse:");
		printf("\n0.	Exit:");
		printf("\n\n\tEnter Your Choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				while(1)
				{
					clrscr();
					printf("\n\tAdd Node in Singly Link List \n");
					printf("\n1.	Create-Default End");
					printf("\n2.	Add Begning");
					printf("\n3.	Add Between");
					printf("\n0.	GoTo Main");
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
							printf("\nEnter First Node:");
							scanf("%d",&no);
							addbeg(no);
							break;
						case 3:
							printf("\nEnter Between Node:")
							scanf("%d",&no);
							printf("\nEnter Position:");
							scanf("%d",&pos);
							addbet(no,pos);
							break;								break;
						case 0:
							goto START:
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
					clrscr();
					printf("\n\tDelete Node in Singly Link List \n");
					printf("\n1.	Delete First");
					printf("\n2.	Delete");
					printf("\n3.	Delete Last");
					printf("\n0.	GoTo Main");
					printf("\n\n\tEnter Your Choice:");
					scanf("%d",&ch);
					switch(ch)
					{
						case 1:
							delfirst();
							break;
						case 2:
							printf("\nEnter Number to Delete:");
							scanf("%d",&no);
							flag = delnode(no);
							if(flag == 0)
							{
								printf("\nNumber Not Found in List:");
							}
							else
							{
								printf("\nNode Deleted:..");
							}
							getch();
							break;
						case 3:
							flag = dellast();
							if(flag == 0)
							{
								printf("\nLink List is Empty...");
							}
							else
							{
								printf("\nNode Deleted...");
							}
							getch();
							break;
						case 0:
							goto START;
						default:
							printf("\nWrong Choice... Try again");
							getch();
					}
				}
				case 4:
					printf("\nEnter Number:");
					scanf("%d",&no);
					search(no);
					break;
				case 5:
					sort();
					break;
				case 6:
					reverse();
					break;
				case 0:
					printf("\nGood Bye...");
					getch();
					goto END;
				default:
					printf("\nWrong Choice... Try Again");
					getch();
		}
	}
	END:
}
void create(int no)
{
	struct node *q;
	q = p;
	if(q == NULL)
	{
		p = (struct node*)malloc(sizeof(struct node));
		p->data = no;
		p->link = NULL;
	}
	else
	{
		while(q->link != NULL)
		{
			q = q->link;
		}
		q->link = (struct node*)malloc(sizeof(struct node));
		q->link->data = no;
		q->link->link = NULL;
	}
	printf("\nNode Created...");
	getch();
}
//Create First Node
void addbeg(int no)
{
	struct node *q,*temp;
	int i;
	q = p;
	if(pos > 0)
	{
		for(i=1;i<pos;i++)
		{
			q = q->ink;
			if(q->link == NULL)
			{
				printf("\nYou are on Last Node,Position Out of Range..");
				getch();
				goto E1;
			}
		}
		temp = (struct node*)malloc(sizeof(struct node));
		temp-> data =no;
		temp->link = q->link;
		q->link = temp;
		printf("\nCreate Node at Position %d",pos+1);
	}
	else
	{
		printf("\nPosition Must be Greater Than Zero");
	}
	getch();
	E1;
}
//To Display All Nodes
void display(void)
{
	struct node *q;
	q = p;
	while(q != NULL)
	{
		printf("%d->",q->data);
		q = q->link;
	}
	getch();
}
void delfirst(void)
{
	struct node *q;
	q = p;
	if(p != NULL)
	{
		p = p->link;
		free(q);
		printf("\nNode Deleted...");
	}
	else
	{
		printf("\nLink List is Empty...");
	}
	getch();
}




