#include<iostream.h>
#include<conio.h>

class Reactangle
{
	int length,width,area;
	public:
		void getData()
		{
			cout<<"\nEnter Length Of Rectangle : ";
			cin>>length;
			cout<<"\nEnter Width Of Rectangle : ";
			cin>>width;
			area=length*width;
		}
		void putData()
		{
			cout<<"\nArea Of Rectangle : "<<area;
		}
};
void main()
{
	Reactangle r1;
	clrscr();
	r1.getData();
	r1.putData();
	getch();
}