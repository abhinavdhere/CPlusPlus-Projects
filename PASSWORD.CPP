/*I made this fun program in order to experiment with password making,
using the string compare (strcmp) function.My own idea :) */
#include <iostream.h>
#include <conio.h>
#include <string.h>
class A
{
public:
char var[4];//variable in which user input string would be stored
void password()//For taking password input
	{
	cout<<"Enter password to access the program"<<endl;
	cin>>var;
	}
};
class B: public A//This class inherits string variable from A
{
public:
void display()
	{
	cout<<"Welcome to the database of the Satyanveshi, Agent A"<<endl<<"Select from one of the options"<<endl;
	}
void choice()
	{
	int i;
	cout<<"1. Member 1"<<endl<<"2. Member 2"<<endl;
	cin>>i;
	switch (i)
		{
		case 1:
		cout<<"Code Name: Bahadur Shah Jafar"<<endl<<"DOJ: 19/04/1990"<<endl;
		break;
		case 2:
		cout<<"Code Name: Akbar"<<endl<<"DOJ:25/09/1995"<<endl;
		break;
		default:
		cout<<"We have limited info";
		break;
		}
	}
};
void main()
{
clrscr();
char var[4],ch,pass1[4]="abhi";
B t;//object of B will be used for calling parent class A
t.password();
if (strcmp(var,pass1)==0)//string comparison with if statement
	{
	do
		{
		t.display();
		t.choice();
		cout<<"Need any more info, agent?";
		cin>>ch;
		}
	while (ch=='y');//while statement for using multiple times
	}
else
cout<<"Access Denied!!!";
getch();
}