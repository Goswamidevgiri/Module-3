#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	clrscr();
	printf("\n Using For Loop : \n");
	for (i=0;i<10;i++)
	{
		printf("\n i : %d",i);
	}
	printf("\n Using While Loop : \n");
	i=1;
	while (i<=10)
	{
		printf("%d",i);
		i++;
	}
	printf("\n Using Do While Loop : \n");
	i=1;
	do{
		printf("%d",i);
		i++;
	}while (i <= 10);
	printf("\n");
	getch();
}
