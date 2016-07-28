#include<iostream>
using namespace std;
class shijian
{
    int year,month,day,hour,minute,second,temp,temp2,jinwei=0,yue[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    void runnian()
    {
        if((year%4==0&&year%100!=0)||year%400==0)
            yue[2]=29;
    }
    void panduan()
    {
        runnian();
        if(second>=60)
        {
            jinwei=second/60;
            second%=60;
            minute+=jinwei;
            jinwei=0;
        }
        if(minute>=60)
        {
            jinwei=minute/60;
            minute%=60;
            hour+=jinwei;
            jinwei=0;
        }
        if(hour>=24)
        {
            jinwei=hour/24;
            hour%=24;
            day+=jinwei;
            jinwei=0;
        }
        while(day-yue[month]>0)
        {
            day-=yue[month];
            month++;
            if(month>12)
            {
                month=1;
                year++;
                runnian();
            }
        }
        if(month>12)
        {
            jinwei=month/12;
            month%=12;
            year+=jinwei;
            jinwei=0;
        }
    }
public:
    shijian(int Y=2016,int Mo=1,int D=1,int H=0,int Mi=0,int S=0)
    {
        year=Y;month=Mo;day=D;hour=H;minute=Mi;second=S;
    }
    ~shijian(){}
    void zengjia()
    {
        cout<<"请选择输入的选项：1.年  2.月  3.日  4.时  5.分  6.秒"<<endl;
        cin>>temp;
        switch(temp)
        {
            case 1:cin>>temp2;year+=temp2;  break;
            case 2:cin>>temp2;month+=temp2; break;
            case 3:cin>>temp2;day+=temp2;   break;
            case 4:cin>>temp2;hour+=temp2;  break;
            case 5:cin>>temp2;minute+=temp2;break;
            case 6:cin>>temp2;second+=temp2;break;
            default :cout<<"输入错误";
        }
        panduan();
    }
    void shuchu()
    {
        cout<<year<<"年"<<month<<"月"<<day<<"日"<<hour<<"时"<<minute<<"分"<<second<<"秒"<<endl;
    }
};
int main()
{
    char a='c';
    shijian s;
    while(a=='c')
    {
        s.shuchu();
        s.zengjia();
        s.shuchu();
        cout<<"press c continue"<<endl;
        cin>>a;
    }
        return 0;
}
