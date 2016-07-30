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
        cout<<"姓名: "<<name<<endl<<"院系: "<<academy<<endl<<"学号: "<<MBBN<<endl;
    }
    void display2()
    {
        cout<<"最大借阅图书数目: "<<MBBN<<endl;
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
        cout<<" 书名： "<<bookname<<endl<<" 作者： "<<author<<endl<<" 出版社： "<<press<<endl<<" 数量： "<<booksize<<endl;
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
    cout<<"请输入选项："<<endl;
    cout<<"1.学生信息    2.图书信息    "<<endl;
    cin>>num;
    if(num == 1)
    {
        cout<<"请输入选项："<<endl;
        cout<<"1.添加学生信息"<<endl;
        cout<<"2.修改学生信息"<<endl;
        cout<<"3.查看学生信息"<<endl;
        cout<<"4.查看学生自己借阅的数目信息"<<endl;
        cout<<"5.删除学生信息"<<endl;

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
            cout<<"输入错误！"<<endl;
            break;
        }
    }
    else
    {
        cout<<"请输入选项："<<endl;
        cout<<"1.添加图书信息"<<endl;
        cout<<"2.修改学生信息"<<endl;
        cout<<"3.删除图书信息"<<endl;
        cout<<"4.查看图书信息"<<endl;
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
            cout<<"输入错误！"<<endl;
            break;
        }
    }
    return 0;
}
