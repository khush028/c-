/* global class = a class which declare outside of all the functions or block .
*/
#include<iostream>
using namespace std ;
class A 
{
    protected:
    int a,b;
    public:
    void input()
    {
        cout<<"enter two number";
        cin>>a>>b;

    }
    void show()
    {
        cout<<a<<" "<<b<<endl;
    }

};
class B: public A
{
    public:
    void display()
    {
        cout<<a<<" "<<b<<endl;
    }
 
};
int main()
{
    A obj;
    B obj1;
    obj1.input();
    obj1.show();
    obj1.display();
}