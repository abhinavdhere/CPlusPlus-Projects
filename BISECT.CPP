/*This program finds the root of equation x^3+x^2-x+1=0 in the interval -2
to 0 using Bisection method and performing 500 iterations.*/
#include <iostream.h>
#include <conio.h>
#include <math.h>
class A
{
public:
float f(float x)
	{
	x=pow(x,3)+pow(x,2)-x+1;
	return (x);
	}//Defines the equation.
//Algorithm for Bisection method
void solve()
	{
	int i;
	float x1=-2,x2=0,x0=-1;//x1 & x2 define the interval
	for (i=0;i<500;i++)//using while !=0 loop probably puts the program in internal infinite loop
		{
		if (f(x0)*f(x1)<0)
			{
			x2=x0;
			}
		else if(f(x0)*f(x2)<0)
			{
			x1=x0;
			}
		x0=(x1+x2)/2;
		}
	cout<<"Root of equation is"<<x0;
	}
};
void main()
{
A t;
clrscr();
t.solve();
getch();
}