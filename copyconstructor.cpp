/* copy constructor = a constructor that is used to copy or initialize the value of one object into another object is called copy constructor .
*/
#include<iostream>
using namespace std ;
class A
{
    int a, b;
    public :
    A(int x , int y)
    {
        a = x;
        b=y;
    }
    
    
    A(A &ref)
    {
        int k,l;
        a =ref.a +20;
        b = ref.b +20; 

    }
    void show()
    {
        cout<<"your a,b value =";
        cout<<a<<","<<b<<endl;

    }

};
int main()
{
    A obj(10,20);
    A obj2 = obj;
    obj.show() ;
    

    obj2.show();
}