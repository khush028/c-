/* Inheritance = inheritance allows a class to inherit the properties'and behaviour from anothe class.

*/
#include<iostream>
using namespace std;
class Father{
    protected:
    string surname = "Jain";
};
class Son : Father
{
    string name ="Harsh";
    public:
    void show()
    {
        cout<<name<<" "<<surname<<endl;
    }
};
class Son1 : Father
{
    string name = " Khushbu ";
    public:
    void disp()
    {
        cout<<name<<" "<<surname;
    }
};
int main()
{
    Son obj;
    obj.show();
    Son1 obj1;
    obj1.disp();


}