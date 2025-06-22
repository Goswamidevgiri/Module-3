#include<stdio.h>
#include<conio.h>

void main ()
{
	int a,b,c;
	clrscr();
	printf("\nEnter Value of A : ");
	scanf("%d",&a);
	printf("\nEnter Value of B : ");
	scanf("%d",&b);

	//Arithmetic Operations
	printf("------Arithmetic Operation------\n");
	c=a+b;
	printf("\n Addition of %d & %d is : %d",a,b,c);
	c=a-b;
	printf("\n Substraction of %d & %d is : %d",a,b,c);
	c=a*b;
	printf("\n Multiplication of %d & %d is : %d",a,b,c);
	c=a/b;
	printf("\n Division of %d & %d is : %d\n",a,b,c);

	// Relational Operations
	printf("\n------ Relational Operations------\n");
	c=a==b;
	printf("\n %d == %d : %d",a,b,c);
	c=a!=b;
	printf("\n %d != %d : %d",a,b,c);
	c=a>b;
	printf("\n %d > %d : %d",a,b,c);
	c=a<b;
	printf("\n %d < %d : %d",a,b,c);
	c=a>=b;
	printf("\n %d >= %d : %d",a,b,c);
	c=a<=b;
	printf("\n %d <= %d : %d",a,b,c);

	//Logical Operations
	printf("\n------Logical Operations------\n");
	c=a&&b;
	printf("\n %d && %d : %d",a,b,c);
	c=a||b;
	printf("\n %d || %d : %d",a,b,c);
	getch();
}