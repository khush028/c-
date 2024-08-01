#include<iostream>
using namespace std ;
class  A
{
    private :
    int a, b ;
    public:
    void show ()
    {
        a = 10 ; b= 20;
        cout<<a<<"  "<<b<<endl;
    }
    friend class B;
};
class B
{
    public:
    void disp(A ref)
    {
        a = ref.a;
        ref.b=40;
        cout<<ref.a<<"  "<<ref.b;
    }
};
int main()
{
    A obj; 
    B obj2;
    obj.show();
    obj2.disp(obj);
}