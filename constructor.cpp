/* constructor =  constructor is a special memeber function of class which is used to create and intialize the objects.
Feature = 1. a constructor can only have one access modifier , which is public.
2. constructor is never inherited and override.
3. each and every cpp class has constructor , either it is provider by complier by default or explecitely created by the user.
*/
#include<iostream>
using namespace std ;
class A
{ 
    public:
    int a ;
    A()
    {
        a = 100;
    }
    void show()
    {
        cout<<a;
    }
};
int  main()
{
    A obj = A();
    obj.show();
}