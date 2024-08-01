#include<iostream>
using namespace std ;
class Base
{
    protected:
    int a, b;
    public:
    void show()
    {
        a = 10;
        b= 20;
        cout<<a<<" "<<b<<endl;

    }
};
class Derive : public Base{ // if we write protected base then we can't access value of base class .
    public:
    void disp()
    {
        a = 30;
        b=40;
        cout<<a<<"  "<<b<<endl;
    }
};
int main()
{
    Derive obj;
    obj.disp();
    obj.show();
}