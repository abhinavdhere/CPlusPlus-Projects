/* This program attempts to test overloading (a feature of polymorphism) &
 classes. It is supposed to generate an Arithmetic Progression.*/
#include <iostream.h>
#include <conio.h>
class A
{
public:
int a,d,n;
//a is first term, d is common difference & n is no. of terms.
void ap()
	{
	clrscr();
	cout<<"Enter a,d & n\n";
	cin>>a>>d>>n;
	cout<<"The Arithmetic Progression is:";
	}
void ap(int a,int d,int n)
//Both functions have same name but one is parameterized to manage overloading.
	{
	int i;
	for (i=1;i<=n;i++)
	cout<<"\n"<<(a+(i-1)*d)<<"\n";
	}
};
void main()
{
A t;
t.ap();
t.ap(t.a,t.d,t.n);//Object t has been used to call variables a,d and n.
getch();
}