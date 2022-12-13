#include<stdio.h>
#include<conio.h>
float multi (float,float,float);
void main()
{
	float P,R,N,I;
	clrscr();

	printf("\nEnter no P");
	scanf("%f",&P);
	printf("\nEnter no R");
	scanf("%f",&R);
	printf("\nEnter no N");
	scanf("%f",&N);

       I=multi(P,R,N);

	printf("\ntotal is:%f",I);
	getch();
}
float multi (float P,float R,float N)
{
	float I;

	I=P*R*N/100;

	return I;


}