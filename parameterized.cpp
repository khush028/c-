/* Parametrized constructor = a constructor that accept or recieve parameter is called 
parametrized constructor .
*/
#include<iostream>
using namespace std;
class A
{
    int a, b;
    public :
    A(int x , int y)
    {
        a = x;
        b = y;

    }
    void show()
    {
        cout<<"your value for a , b =";
        cout<<a<<","<<b;
    }
};
int main()
{
    A obj(10,20);
    obj.show();
}