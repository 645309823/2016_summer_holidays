#include<iostream>
#include<cmath>
using namespace std;
class product
{
char* tag; //产品名称
double price; //单价
int quantity; //库存数量
public:
//构造函数
product(char *a,double b,int c)
{tag=a,price=b,quantity=c;}
//析构函数
~product(){}
//购买某种商品函数buy，返回false表示库存数量不够，否则更新库存数量，并计算费用
bool buy(int a)
{
    if(quantity-a>0)
    {
        quantity-=a;
        cout<<"-$"<<a*price<<endl;
        return true;
    }
    else
        return false;
}
//属性相关函数，如库存调整、显示库存数量等
void tzkc(int a)
{quantity=a;}
void display()
{cout<<"quantity:"<<quantity<<endl;}
};
int main()
{
    product s("aaa",10,100);
    s.buy(3);
    s.tzkc(50);
    s.display();
    return 0;
}
