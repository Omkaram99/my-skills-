#include<iostream>
#include<string>
using namespace std;
class myclass
{ public:
    float sendAvaragea,sendTotal;int sendDays;
  void salery()
  {
  int income=0,days=0;float total=0,avarage=0;
  do{
    cout<<"Enter salary of day ";
    cout<<days+1;cout<<": ";
    cin>>income;
    total=total+income; days+=1;
  }while(income != 0);days--;
  avarage=total/days; sendAvaragea=avarage;sendTotal=total;sendDays=days;

  }
  float totalSalary(){return sendTotal;} float avarageSalary(){return sendAvaragea;}
  int totalDays(){return sendDays;}

};
int main (){
myclass classA;
classA.salery();
cout<<"\n Total salary is of "<<classA.totalDays()<<" is : "<<classA.totalSalary()<<" Rs.\n";
cout<<" Total average of the salary is : "<<classA.avarageSalary()<<" Rs."<<endl;
 return 0;
}
