#include<iostream>
using namespace std;
class Queue
{
public:
Queue (int size = 10){front=rear=0,capacity=size,data=new int[size];} //构造函数
~Queue (); //析构函数
bool empty () const { return front == rear; } //队列是否为空
bool full() const {return rear == capacity;} //队列是否已满
int size () const; //队列中元素的个数
void push (int a); //插入一个元素
int pop (); //弹出一个元素
private:
int* data; //数据区
int front,rear; //首尾位置
int capacity; //数据区容量
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
