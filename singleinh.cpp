/* Single Inheritance =  a class which contain only one base class and only one derive class
*/
#include<iostream>
using namespace std ;
class base 
{
    protected:
    int a , b; 
    public:
    void input()
    {
        cout<<"enter your value";
        cin>>a>>b;

    }
   /* void show()
    {
        cout<<" a= "<<a<<" " <<"b= "<<b<<endl;
    }*/
};
class derive : public base{
    int m,n;
    public :
    void getdata()
    {
        cout<<"enter values";
        cin>>m>>n;
    }
    void display()
    {
        cout<<"m =" <<m<<"  n= "<<n<<endl;
        cout<<"a = "<<a<<"  b= "<<b;
    }

};
int main()
{
    base obj;
    derive obj1;
    //obj.input();
    //obj.show();
    obj1.input();
    //obj1.show();
    obj1.getdata();
    obj1.display();

}