#include<iostream>
#include<algorithm>
using namespace std;
const int SetCapacity = 100;
class set
{
int elements[SetCapacity]; //������
int size; //Ԫ�ظ���
public:
set(int a=0){size=a;} //���캯��
set(const set& src); //�������캯��
bool Contains(int el); //�Ƿ����Ԫ��el
bool Add(int el); //���Ԫ��el
bool Remove(int el); //ɾ��Ԫ��el
void Assign(set& st); //��st��ֵ����ǰ����
bool EqualTo(set& st); //�б𼯺�st�뵱ǰ�����Ƿ���ͬ��Ԫ����ͬ
bool Empty(){return size;} //�����Ƿ�Ϊ��
set Intersect(set& st); //�󼯺�st �뵱ǰ���ϵĽ���
set Union(set& st);//�󼯺�st �뵱ǰ���ϵĲ���
void print(); //��ʾ���ϵ�����Ԫ��
};
bool set::Contains(int el)
{
    for(int i=0;i<SetCapacity;i++)
        {
            if(elements[i]==el)
                return true;
        }
    return false;
}
bool set::Add(int el)
{
    if(size==SetCapacity)
        return false;
    else
    {
        elements[size++]=el;
        return true;
    }
}
bool set::Remove(int el)
{
    if(!Contains(el))
        return false;
    for(int i=0;i<size;i++)
    {
        if(el==elements[i])
        {
            for(int j=i;j<size-1;j++)
                elements[j]=elements[j+1];
            size--;
            return true;
        }
    }
}
void set::Assign(set& st)
    {
        size=st.size;
        for(int i=0;i<size;i++)
            elements[i]=st.elements[i];
    }
bool set::EqualTo(set& st)
    {
        for(int i=0;i<size;i++)
        {
            if(elements[i]!=st.elements[i])
                return false;
            else
                return true;
        }
    }
set set::Intersect(set& st)
{
    for(int i=0;i<size;i++)
        for(int j=0;j<st.size;j++)
            if(elements[i]==st.elements[j])
                cout<<elements[i]<<endl;
}
set set::Union(set& st)
{
    size+=st.size;
    sort(elements,elements+size);
    for(int i=0;i<size-1;i++)
    {
        if(elements[i]==elements[i+1])
        {
            for(int j=i;i<size;i++)
                elements[j]=elements[j+1];
        }
    }
}

void set::print()
{
    for(int i=0;i<size;i++)
        cout<<elements[i]<<endl;
}
int main()
{
    set x,y;
    x.Add(1);
    x.Add(2);
    x.Contains(1)?cout<<"yes"<<endl:cout<<"no"<<endl;
    x.Remove(1);
    x.Empty()?cout<<"yes"<<endl:cout<<"no"<<endl;
    y.Assign(x);
    y.Contains(2)?cout<<"yes"<<endl:cout<<"no"<<endl;
    return 0;
}
