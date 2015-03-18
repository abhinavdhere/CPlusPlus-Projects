#include <iostream.h>
#include <conio.h>
class A
{
public:
void arms1()
		{
		int i,m,n,sum=0,o=1;
		while (o<500)
			{
			n=o,sum=0;
			while (n!=0)
				{
				m=n%10;
				sum=sum+(m*m*m);
				n=n/10;
				}
			if(o==sum)
			cout<<o<<endl;
			o=o+1;
			}
		}
};
void main()
{
A t;
clrscr();
t.arms1();
getch();
}