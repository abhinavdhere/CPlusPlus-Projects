#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
int i,deg;
char eq[20]
cout<<"Enter polynomial in standard format with all powers mentioned"<<endl<<"(except the constants)"<<endl;
cin>>eq;
i=atoi(eq);
if (i==1)
deg=1;
else if (i==21)
deg=2;
else if (i==321)
deg=3;
else if (i=4321)
deg=4;
cout<<"Degree of polynomial is "<<deg;
getch();
}

