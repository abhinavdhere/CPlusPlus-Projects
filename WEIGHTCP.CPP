/*Dt. 08/08/12
This is the program I wanted to make most. It calculates weight on other planets. */
#include <iostream.h>
#include <conio.h>
class A
{
public:
float w,mass,result;//variables defined on class level
void input()//Takes in weight on Earth and calculates mass
	{
	cout<<"\nEnter your weight on Earth"<<endl;
	cin>>w;
	mass=w/9.8;
	}
float accg(float m, float r)//Function for acceleration due to gravity
	{
	float g;
	g=((6.67e-11)*m)/(r*r);
	return (g);
	}
void Mercury()//Weight calculator function which works using accg function
	{
	float m=3.30e23,r=2440000,g;//mass & radius of heavenly body
	g=accg(m,r);
	result=mass*g;
	cout<<endl<<"Your weight on Mercury will be \t"<<result<<" kgs.";
	}
void Venus()
	{
	float m=4.86e24,r=6.05e6,g;
	g=accg(m,r);
	result=mass*g;
	cout<<"Your weight on Venus will be \t"<<result<<" kgs.";
	}
void Earth()
	{
	cout<<endl<<"Come on, you just entered it!";
	}
void Mars()
	{
	float m=6.42e23,r=3.38e6,g;
	g=accg(m,r);
	result=mass*g;
	cout<<"Your weight on Mars will be \t"<<result<<" kgs.";
	}
void Jupiter()
	{
	float m=1.89e27,r=6.9e7,g;
	g=accg(m,r);
	result=mass*g;
	cout<<"Your weight on Jupiter will be \t"<<result<<" kgs.";
	}
void Saturn()
	{
	float m=5.68e26,r=5.71e7,g;
	g=accg(m,r);
	result=mass*g;
	cout<<"Your weight on Saturn will be \t"<<result<<" kgs.";
	}
void Uranus()
	{
	float m=8.68e25,r=2.5e7,g;
	g=accg(m,r);
	result=mass*g;
	cout<<"Your weight on Uranus will be \t"<<result<<" kgs.";
	}
void Neptune()
	{
	float m=1.02e26,r=2.45e7,g;
	g=accg(m,r);
	result=mass*g;
	cout<<"Your weight on Neptune will be \t"<<result<<"kgs.";
	}
void Pluto()
	{
	float m=1.31e22,r=1.1e6,g;
	g=accg(m,r);
	result=mass*g;
	cout<<"Your weight on Pluto will be \t"<<result<<"kgs.";
	}
void Sun()
	{
	float m=1.98e30,r=6.9e8,g;
	g=accg(m,r);
	result=mass*g;
	cout<<endl<<"Umm...well, you can never actually stand there to feel your weight,"<<endl<<"but theoritically it should be \t"<<result<<" kgs.";
	}
void Moon()
	{
	float m=7.34e22,r=1.73e6,g;
	g=accg(m,r);
	result=mass*g;
	cout<<endl<<"You weight on moon will be "<<result<<" kgs.";
	}
void anony()
	{
	float m,r,g;
	char name[15];
	cout<<"Enter name of the body"<<endl;
	cin>>name;
	cout<<"Enter mass of "<<name<<" in kgs"<<endl;
	cin>>m;
	cout<<"Enter radius of "<<name<<" in m"<<endl;
	cin>>r;
	g=accg(m,r);
	result=mass*g;
	cout<<"Your weight on "<<name<<" will be\t"<<result<<" kgs.";
	}
};
void main()
{
A t;
int i;
char ch;
clrscr();
cout<<"\t\t\t"<<"**Welcome to Celestial Weight finder**"<<endl;
cout<<"\nThis program would calculate your weight on other planets by taking your weight on earth.Press any key to continue"<<endl;
getch();
do
	{
	clrscr();
	cout<<"\n\nSelect the serial no. for planet where you want to find your weight"<<endl;
	cout<<"\n1.Mercury\n2.Venus\n3.Earth\n4.Mars\n5.Jupiter\n6.Saturn\n7.Uranus\n8.Neptune\n9.Pluto\n10.Sun\n11.Moon\n12.Any other planet,star or natural satellite(by entering Mass & Radius of that body)\n";
	cin>>i;
	clrscr();
	cout<<"You selected "<<i<<endl;
	t.input();
	switch (i)
		{
		case 1:
		t.Mercury();
		break;
		case 2:
		t.Venus();
		break;
		case 3:
		t.Earth();
		break;
		case 4:
		t.Mars();
		break;
		case 5:
		t.Jupiter();
		break;
		case 6:
		t.Saturn();
		break;
		case 7:
		t.Uranus();
		break;
		case 8:
		t.Neptune();
		break;
		case 9:
		t.Pluto();
		break;
		case 10:
		t.Sun();
		break;
		case 11:
		t.Moon();
		break;
		case 12:
		t.anony();
		break;
		default:
		cout<<"Invalid choice";
		break;
		}
	cout<<"\n\nRe-run the program?(y/n)"<<endl;
	cin>>ch;
	}
while (ch=='y');
}