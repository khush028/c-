#include<iostream>
using namespace std ;
class A
{
    int n ;
    public :
    A()
    {
        n= 10;
        cout<<n<<endl;

    }
    ~A()
    {
        cout<<"destroyed object<<endl";
        cout<<n<<endl;
    }

};
int main()
{
    A ob , ob1;
}