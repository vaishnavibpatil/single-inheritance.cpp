#include<iostream>
using namespace std;
class parent
{

    public:
    int a,b,c;
    void getdata()
    {
        cout<<"enter the no=";
        cin>>a>>b;
    }
    void display()
    {
        cout<<"a="<<a<<endl<<"b="<<b<<endl;
    }

};
class child:public parent
{

    public:
    void add()
    {
    c=a+b;
    cout<<"c="<<c<<endl;
    }
};
int main()
{
    child h;
    h.getdata();
    h.display();
    h.add();


}
