#include<stdio.h>
#include<conio.h>
void main()
{
    float p,r,n,i;
    clrscr();
    printf("\n Enter amount:");
    scanf("%f",&p);
    printf("\n Enter rate:");
    scanf("%f",&r);
    printf("\n Enter year:");
    scanf("%f",&n);

    i=p*r*n/100;

    printf("\n simple interest is:%f",i);
    getch();
}