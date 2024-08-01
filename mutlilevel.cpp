/* Multilevel = a class which contain only one base class and multiple derive class is 
called multilevel inheritance
*/
#include<iostream>
using namespace std;
class base
{
    int a;
    public:
    void input()
    {
        cout<<"enter value of base class ";
        cin>>a;
    }
    void show()
    {
        cout<<"a ="<<a<<endl;
    }

};
class derived : public base
{
    private :
    int b;
    public:
    void input1()
    {
        cout<<"enter value of derive class";
        cin>>b;
    }
    void show1()
    {
        cout<<"b="<<b<<endl;
    }


};
class derived2 : public derived 
{
    int c;
    public:
    void input2()
    {
        cout<<"enter value of drive 2 class";
        cin>>c;

    }
    void show2()
    {
        cout<<" c = "<<c<<endl;
    }

};
int main()
{
    derived2 ob1;
    ob1.input();
    ob1.show();
    ob1.input1();
    ob1.show1();
    
    ob1.input2();
    ob1.show2();



}