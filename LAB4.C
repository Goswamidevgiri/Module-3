#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	clrscr();
	printf("\n Enter A : ");
	scanf("%d",&a);
	if (a%2==0)
	{
		printf("\nA is Even Number");
	}
	else
	{
		printf("\nA is Odd Number");
	}
	printf("\nEnter a month number (1-12); ");
	scanf("%d",&b);

	switch (b)
	{
		case 1:
			printf("1-January\n");
			break;
		case 2:
			printf("2-February\n");
			break;
		case 3:
			printf("3-March\n");
			break;
		case 4:
			printf("4-April\n");
			break;
		case 5:
			printf("5-May\n");
			break;
		case 6:
			printf("6-June\n");
			break;
		case 7:
			printf("7-July\n");
			break;
		case 8:
			printf("8-August\n");
			break;
		case 9:
			printf("9-September\n");
			break;
		case 10:
			printf("10-October\n");
			break;
		case 11:
			printf("11-November\n");
			break;
		case 12:
			printf("12-December\n");
			break;
		default:
			printf("Invalid month number! Please enter 1-12. \n");
	}
	getch();
}