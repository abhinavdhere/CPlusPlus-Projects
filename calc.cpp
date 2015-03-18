//A calculator with a MATLAB like interface i.e. enter the command and get answer
// Author: Abhinav Dhere ; Date: 18/03/15

#include <iostream>

using namespace std;

int number(string n){
int num;
if (n=="1"){
    return num=1;
}
if (n=="2"){
    return num=2;
}
if (n=="3"){
    return num=3;
}
if (n=="4"){
    return num=4;
}
}

int main(void){
int a;
string num;
cout<<"Give number";
cin>>num;
a=number(num);
cout<<a+1;
return 0;
}
