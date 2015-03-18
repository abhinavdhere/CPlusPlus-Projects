#include <iostream.h>
#include <conio.h>
int mass,w,i;
float m,r,g,result;
class grav
{public:
void accg()
	{
	g=((0.000000000667)*m)/(r*r);
	}
void mas()
	{
	mass=w/10;
	}
};
void main()
{
clrscr();
grav t;
cout<<"Where do you want to check your weight?\n 1.Mercury";
cin>>i;
cout<<"Please enter your weight on Earth";
cin>>mass;
t.mas();
t.accg();
switch (i)
{
case 1:
m=3300000000000000000000000;
r=2440000;
result=g*mass;
cout<<"Your weight on Mercury would be"<<result;
break;
default:
cout<<"Invalid choice";
break;
}
getch();
}