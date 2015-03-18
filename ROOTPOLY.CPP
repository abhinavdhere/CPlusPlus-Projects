/*Dt.07/08/12
This is a 205 line program, and my longest program till date.
It finds root of polynomial using bisection method(see help statement for details) */
#include <iostream>
#include <cmath>
using namespace std;
//Seperate class for each type of polynomial(as per degree of polynomial)
class deg1
{
public:
int a,b;
float x1,x2;
//Input function
void in1()
	{
	cout<<"Enter coeff. of x & constant"<<endl;
	cin>>a>>b;
	cout<<endl<<"Enter interval in terms of x1 & x2"<<endl;
	cin>>x1>>x2;
	}
//definition of equation
float fd1(float x)
	{
	x=(a*x)+b;
	return (x);
	}
//Algorithm for bisection method
void solve1()
	{
	int i;
	float x0=(x1+x2)/2;
	for (i=0;i<500;i++)
		{
		if (fd1(x0)==0)
		break;
		if (fd1(x0)*fd1(x1)<0)
			{
			x2=x0;
			}
		else if(fd1(x0)*fd1(x2)<0)
			{
			x1=x0;
			}
		x0=(x1+x2)/2;
		}
	cout<<endl<<"Approximate root of equation in given interval is"<<"\t"<<x0;
	}
};
class deg2
{
public:
int a,b,c;
float x1,x2;
void in2()
	{
	cout<<"Enter coeff. of x^2, x & constant"<<endl;
	cin>>a>>b>>c;
	cout<<endl<<"Enter interval in terms of x1 & x2"<<endl;
	cin>>x1>>x2;
	}
float fd2(float x)
	{
	x=(a*pow(x,2))+(b*x)+c;
	return (x);
	}
void solve2()
	{
	int i;
	float x0=(x1+x2)/2;
	for (i=0;i<500;i++)
		{
		if (fd2(x0)==0)
		break;
		if (fd2(x0)*fd2(x1)<0)
			{
			x2=x0;
			}
		else if(fd2(x0)*fd2(x2)<0)
			{
			x1=x0;
			}
		x0=(x1+x2)/2;
		}
	cout<<endl<<"Approximate root of equation in given interval is"<<"\t"<<x0;
	}
};
class deg3
{
public:
int a,b,c,d;
float x1,x2;
void in3()
	{
	cout<<"Enter coeff. of x^3, x^2, x & constant"<<endl;
	cin>>a>>b>>c>>d;
	cout<<endl<<"Enter interval in terms of x1 & x2"<<endl;
	cin>>x1>>x2;
	}
float fd3(float x)
	{
	x=(a*pow(x,3))+(b*pow(x,2))+(c*x)+d;
	return (x);
	}
void solve3()
	{
	int i;
	float x0=(x1+x2)/2;
	for (i=0;i<500;i++)
		{
		if (fd3(x0)==0)
		break;
		if (fd3(x0)*fd3(x1)<0)
			{
			x2=x0;
			}
		else if(fd3(x0)*fd3(x2)<0)
			{
			x1=x0;
			}
		x0=(x1+x2)/2;
		}
	cout<<endl<<"Approximate root of equation in given interval is"<<"\t"<<x0;
	}
};
class deg4
{
public:
int a,b,c,d,e;
float x1,x2;
void in4()
	{
	cout<<"Enter coeff. of x^4, x^3, x^2, x & constant"<<endl;
	cin>>a>>b>>c>>d>>e;
	cout<<endl<<"Enter interval in terms of x1 & x2"<<endl;
	cin>>x1>>x2;
	}
float fd4(float x)
	{
	x=(a*pow(x,4))+(b*pow(x,3))+(c*pow(x,2))+(d*x)+e;
	return (x);
	}
void solve4()
	{
	int i;
	float x0=(x1+x2)/2;
	for (i=0;i<500;i++)
		{
		if (fd4(x0)==0)
		break;
		if (fd4(x0)*fd4(x1)<0)
			{
			x2=x0;
			}
		else if(fd4(x0)*fd4(x2)<0)
			{
			x1=x0;
			}
		x0=(x1+x2)/2;
		}
	cout<<endl<<"Approximate root of equation in given interval is"<<"\t"<<x0;
	}
};
int main()
{
int i;
char ch,ch1;
deg1 A; deg2 B; deg3 C; deg4 D;//Object assignment
cout<<"\t\t"<<"**Root finder for polynomials**"<<endl;
cout<<endl<<"\nTo view help on how to use this program, press h. To continue press c"<<endl;
cin>>ch1;//variable for accessing help
if(ch1=='h')
//Help statement
	{
	cout<<"\nAbout this program:"<<"\nThis program finds the approximate root of a given equation,"<<endl<<"using Bisection method."<<endl<<"You need to select degree of equation, enter coefficients of the equation"<<endl;
	cout<<"and enter the interval in which bisection method is to be used."<<endl<<"After performing 500 iterations of bisection method, the program would give you the approx. root"<<endl<<"For more accuracy, take an interval of range 1"<<endl<<"\n-Program made by Abhinav Dhere"<<endl;
	cin.get();
	cin.get();
	}
else if(ch1=='c')
goto label1;
label1:
do
	{
	cout<<endl<<"Enter degree of polynomial(integral, upto 4)"<<endl;
	cin>>i;
	switch (i)//Switch used for selecting degree
		{
		case 1:
		A.in1();
		A.solve1();
		break;
		case 2:
		B.in2();
		B.solve2();
		break;
		case 3:
		C.in3();
		C.solve3();
		break;
		case 4:
		D.in4();
		D.solve4();
		break;
		default:
		cout<<"Invalid entry";
		break;
		}
	cout<<endl<<"\nRun again?(y/n)"<<endl;
	cin>>ch;
	}
while(ch=='y');//Do-while used for giving re-run option.
}
