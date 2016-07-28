#include<iostream>
using namespace std;
class Queue
{
public:
Queue (int size = 10){front=rear=0,capacity=size,data=new int[size];} //���캯��
~Queue (); //��������
bool empty () const { return front == rear; } //�����Ƿ�Ϊ��
bool full() const {return rear == capacity;} //�����Ƿ�����
int size () const; //������Ԫ�صĸ���
void push (int a); //����һ��Ԫ��
int pop (); //����һ��Ԫ��
private:
int* data; //������
int front,rear; //��βλ��
int capacity; //����������
};
void Queue::push(int a){data[rear]=a,rear++;}
int Queue::pop()
{
    int temp=data[front];
    for(int i=rear;i>0;i--)
        data[i]=data[i-1];
    return temp;
}
Queue::~Queue(){delete data;}
int main()
{
    Queue s;
    s.push(1);
    s.push(2);
    s.pop();
    s.empty()?cout<<"empty."<<endl:cout<<"not empty."<<endl;
    s.full()?cout<<"full."<<endl:cout<<"not full."<<endl;
    return 0;
}
