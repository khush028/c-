/* Nested class = a class which is declared or contain  inside another class called nested class.
*/
#include<iostream>
using namespace std ;
class A
{
    public:
    class B
    {
        int a , b;
        public:
        void input()
        {
            cout<<"enter values";
            cin>>a>>b;

        }
        void show()
        {
            cout<<a<<" "<<b<<endl;
        }

    };
};
int main()
{
    A ::B obj;
    obj.input();
    obj.show();
}