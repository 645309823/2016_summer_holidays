#include<iostream>
#include<cmath>
using namespace std;
class sanjiao
{
    double a,b,c;
public:
    sanjiao(double A,double B,double C)
    {a=A,b=B,c=C;}
    bool pd1()
    {return (a+b)>c&&(a+c)>b&&(b+c)>a?true:false;}
    bool pd2()
    {return a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a?true:false;}
    double mianji()
    {
        double p=0;
        p=(a+b+c)/2;
        return sqrt(p*(p-a)*(p-b)*(p-c));
    }
    ~sanjiao(){}
};
int main()
{
    sanjiao sss(4,5,6);
    if(sss.pd1())
        cout<<"yes"<<endl;
    else
        cout<<"No"<<endl;

    if(sss.pd2())
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    cout<<sss.mianji();
    return 0;
}
