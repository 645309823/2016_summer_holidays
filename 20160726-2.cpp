#include<iostream>
#include<cmath>
using namespace std;
class Address
{
    string name,street,city;
    int Zipcode;

public:
    Address(string A,string B,string C,int D)
    {name=A,street=B,city=C,Zipcode=D;}
    void ChangeName(string A)
    {name=A;}
    void Display()
    {cout<<"name:"<<name<<endl<<"street:"<<street<<endl<<"city:"<<city<<endl<<"zipcode:"<<Zipcode<<endl;}
    ~Address(){}
};
int main()
{
    Address ss("ljx","xxx","fuxim",123000);
    ss.Display();
    ss.ChangeName("sb");
    ss.Display();
    return 0;
}
