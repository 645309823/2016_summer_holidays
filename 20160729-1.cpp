#include<iostream>
#include<string>
using namespace std;
class student
{
public:
    string name;
    string academy;
    int MBBN;
    static int id;
    student(string NAME , string ACADEMY , int mbbn):name(NAME),academy(ACADEMY),MBBN(mbbn){}
    void add1(string NAME,string ACADEMY,int mbbn)
    {
        name = NAME;
        academy = ACADEMY;
        MBBN = mbbn;
        id++;
    }
    void change1(string NAME,string ACADEMY,int mbbn)
    {
        name = NAME;
        academy = ACADEMY;
        MBBN = mbbn;
    }
    void daete1()
    {
        name = "";
        academy = "";
        MBBN = 0;
        id--;
    }
    void display1()
    {
        cout<<"����: "<<name<<endl<<"Ժϵ: "<<academy<<endl<<"ѧ��: "<<MBBN<<endl;
    }
    void display2()
    {
        cout<<"������ͼ����Ŀ: "<<MBBN<<endl;
    }
    ~student(){}
};

class Book
{
public:
    string bookname;
    string author;
    string press;
    int booksize;
    static int bookid;
    Book(string NAME,string AUTHOR, string PRESS,int size):bookname(NAME),author(AUTHOR),press(PRESS),booksize(size){}
    void add(string NAME,string AUTHOR, string PRESS,int size)
    {
        bookname = NAME;
        author = AUTHOR;
        press = PRESS;
        booksize = size;
        bookid++;
    }
    void change(string NAME,string AUTHOR, string PRESS,int size)
    {
        bookname = NAME;
        author = AUTHOR;
        press = PRESS;
        booksize = size;
    }
    void daete3()
    {
        bookname = "";
        author = "";
        press = "";
        booksize = 0;
        bookid--;
    }
    void display()
    {
        cout<<" ������ "<<bookname<<endl<<" ���ߣ� "<<author<<endl<<" �����磺 "<<press<<endl<<" ������ "<<booksize<<endl;
    }
    ~Book(){}
};

int student::id = 1;
int Book::bookid = 1;

int main()
{
    student a("ljx","software",666);
    Book b("who to go die","not ljx","FUXIN",4);
    string temp1,temp2,temp3,temp4,temp5;
    int num,num1,num2,num3,num4;
    cout<<"������ѡ�"<<endl;
    cout<<"1.ѧ����Ϣ    2.ͼ����Ϣ    "<<endl;
    cin>>num;
    if(num == 1)
    {
        cout<<"������ѡ�"<<endl;
        cout<<"1.���ѧ����Ϣ"<<endl;
        cout<<"2.�޸�ѧ����Ϣ"<<endl;
        cout<<"3.�鿴ѧ����Ϣ"<<endl;
        cout<<"4.�鿴ѧ���Լ����ĵ���Ŀ��Ϣ"<<endl;
        cout<<"5.ɾ��ѧ����Ϣ"<<endl;

        cin>>num1;
        switch(num1)
        {
        case 1:
            cin>>temp1>>temp2>>num3;
            a.add1(temp1,temp2,num3);
            break;
        case 2:
            cin>>temp1>>temp2>>num3;
            a.change1(temp1,temp2,num3);
            break;
        case 3:
            a.display1();
            break;
        case 4:
            a.display2();
            break;
        case 5:
            a.daete1();
            break;
        default:
            cout<<"�������"<<endl;
            break;
        }
    }
    else
    {
        cout<<"������ѡ�"<<endl;
        cout<<"1.���ͼ����Ϣ"<<endl;
        cout<<"2.�޸�ѧ����Ϣ"<<endl;
        cout<<"3.ɾ��ͼ����Ϣ"<<endl;
        cout<<"4.�鿴ͼ����Ϣ"<<endl;
        cin>>num2;
        switch(num2)
        {
        case 1:
            cin>>temp3>>temp4>>temp5>>num4;
            b.add(temp1,temp2,temp5,num4);
            break;
        case 2:
            cin>>temp3>>temp4>>temp5>>num4;
            b.change(temp1,temp2,temp5,num4);
            break;
        case 3:
            b.daete3();
            break;
        case 4:
            b.display();
            break;
        default:
            cout<<"�������"<<endl;
            break;
        }
    }
    return 0;
}
