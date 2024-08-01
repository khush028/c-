/* Encapsulation = encapsulation means binding data and methods within a class , providing 
control over the accessibility and it  prevents external code from directly modifying the internal data of an object.

*/
#include<iostream>
using namespace std ;
class encap
{
    int age;// it's private it can't access for access this we create function
    public :
    string name ;
    void setvalue(int a)
    {
        age = a;
        cout<<age;
    }

};
int main()
{
    encap e;
    
    e.name="khushbu";
    e.setvalue(20);
    cout<<"hello,  "<<e.name;
    
}