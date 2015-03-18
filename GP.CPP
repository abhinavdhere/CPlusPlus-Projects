/*This program allows user to select and print a particular sequence.
It intends to generate a geometric progression*/
#include <iostream.h>
#include <conio.h>
#include <math.h>
class A
{
public:
int a,r,n;
void input()
	{
	cout<<"Enter first term, common ratio and no. of terms\n";
	cin>>a>>r>>n;
	cout<<"The G.P. is:"<<endl;
	}
};
class B:public A
{
public:
	void gp()
	{
	int i;
	for (i=1;i<=n;i++)
	cout<<"\n"<<(a*pow(r,(i-1)))<<"\n";
	}
};
class C
{
public:
int a,d,n;
void input_ap()
	{
	cout<<"Enter first term,common difference & no. of terms";
	cin>>a>>d>>n;
	}
};
class D:public C
{
public:
void fibo()
	{
	int f1=0,f2=1,f3,i,n;
	cout<<"Enter n"<<endl;
	cin>>n;
	cout<<"The Fibbonaci series is:"<<endl<<f1<<endl<<f2<<endl;
	for (i=1;i<=n;i++)
		{
		f3=f1+f2;
		f1=f2;
		f2=f3;
		cout<<f3<<endl;
		}
	}
void ap()
	{
	int i;
	for (i=1;i<=n;i++)
	cout<<"The A.P. is"<<"\n"<<(a+(i-1)*d)<<"\n";
	}
};
void main()
{
clrscr();
int j;
char ch;
B t2;
D t3;
do
	{
	cout<<"1. A.P.\n2. G.P.\n3.Fibbonaci Series";
	cin>>j;
	switch (j)
		{
		case 1:
		t3.input_ap();
		t3.ap();
		break;
		case 2:
		t2.input();
		t2.gp();
		break;
		case 3:
		t3.fibo();
		break;
		default:
		cout<<"Invalid choice";
		break;
		}
	cout<<endl<<"Do you want to re-run the program?";
	cin>>ch;
	}
while (ch=='y');
}