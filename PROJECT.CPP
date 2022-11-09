#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float x,y,z;
cout<<"Enter the first number:"<<ends;
cin>>x;
cout<<"Enter the second number:"<<ends;
cin>>y;
cout<<"Enter the third number:"<<ends;
cin>>z;
if(x>y)
{
	if (x>z)
	{
		cout<<"Greatest number is:"<<ends<<x;
	}
	else
	{
		cout<<"Greatest number is:"<<ends<<z;
	}
}
else if(y>x)
{
	if(y>z)
	{
		cout<<"Greatest number is:"<<ends<<y;
	}
	else
	{
		cout<<"Greatest number is:"<<ends<<z;
	}
}
getch();
}