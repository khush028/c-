/* local class  = a class which is declared inside a function or block is a called local class.
*/
#include<iostream>
using namespace std ;
void fun()
{
    class A
    {
        private:
        int a , b;
        public:
        void show()
        {
            cout<<"enter your two values";
            cin>>a>>b;
        }
    };
    //A obj;
    //obj.show();
}
int main()
{
    fun();
}