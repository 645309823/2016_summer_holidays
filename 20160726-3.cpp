#include<iostream>
#include<cmath>
using namespace std;
class product
{
char* tag; //��Ʒ����
double price; //����
int quantity; //�������
public:
//���캯��
product(char *a,double b,int c)
{tag=a,price=b,quantity=c;}
//��������
~product(){}
//����ĳ����Ʒ����buy������false��ʾ�������������������¿�����������������
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
//������غ����������������ʾ���������
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
