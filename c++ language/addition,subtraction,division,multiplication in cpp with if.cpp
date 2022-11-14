#include<iostream>
using namespace std;
int main ()
{ restart:
    int b,c,d;
    cout<<"\nEnter a value: ";cin>>b;cout<<"Enter b value: ";cin>>d; options:
    cout<<"\nSelect the option :- \n 1.addition\n 2.subtraction\n 3.multiplication\n 4.division\n ";cin>>c;
    if (c==1){cout<<"addition of a+b = "<<b+d;}
    else if (c==2){cout<<"subtraction of a-b = "<<b-d;}
    else if (c==3){cout<<"multiplication of a*b = "<<b*d;}
    else if (c==4){cout<<"division of a/b = "<<(float)b/d;}
    else {cout<<"selection is invalid";goto options;}
}
