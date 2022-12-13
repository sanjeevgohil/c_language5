\#include<stdio.h>
#include<conio.h>
void main()
{
    float f,c;
    clrscr();
    printf("\n Enter fahrenhit :");
    scanf("%f",&f);

    c=(f-32)*5/9;

    printf("\n celcics is :%.2f",c);
    getch();
}