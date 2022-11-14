#include<iostream>
#include<string>
#include<ctime>
//#include<cmath>>
using namespace std;


class a{

public:
int num;a(){};
a(int x){num=x;};

//add
a operator +(a ad1){
a ad2;
ad2.num=num+ad1.num;
return (ad2);}
//sub
a operator -(a ad1){
a ad2;
ad2.num=num-ad1.num;
return (ad2);}
//mul
a operator *(a ad1){
a ad2;
ad2.num=num*ad1.num;
return (ad2);}
//
a operator /(a ad1){
a ad2;
ad2.num=num/ad1.num;
return (ad2);}
};
int main()
{ int num1,num2;cout<<"enter number 1 and number 2: ";
cin>>num1>>num2;
    a adx(num1),ady(num2),ad2;
    ad2=adx+ady;
    cout<<"1-Addition\n2-Subtraction\n3-Multiplication\n4-Division\n5-To end\n";
    int c;cin>>c;
    while(c!=5){
    switch (c){
    case 1:
    ad2=adx+ady;
    cout<<ad2.num<<endl;
    break;
    case 2:
    ad2=adx-ady;
    cout<<ad2.num<<endl;
    break;
    case 3:
    ad2=adx*ady;
    cout<<ad2.num<<endl;
    break;
    case 4:
    ad2=adx/ady;
    cout<<ad2.num<<endl;
    break;}cout<<"1-Addition\n2-Subtraction\n3-Multiplication\n4-Division\n5-To end\n";cin>>c;

    }
    return 0;}
