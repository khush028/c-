/* opps = object oriented programming isa programming approach that are based on class and objects , whuch 
can contain data and code that mainplulate that data

class=  class is a user dedined datatype or blueprint that wrapped data and functions into a single 
entity.

object = obect is a concrete representation of the blueprint that is defined by the class

*/
#include<iostream>
using namespace std ;
class Person{
    int age;
    string name;
    string address;
    public :
    void input(){
        cout<<"enter age";
        cin>>age;
        cout<<"enter name";
        cin>>name;
        cout<<"enter address";
        cin>>address;
    }
    void show(){
        cout<<"age ="<<age<<endl;
        cout<<"name = "<<name<<endl;
        cout<<"address ="<<address<<endl;
    }
};
int main(){
    Person  khushbu , harsh , bhavya;
    khushbu.input();
    khushbu.show();
    harsh.input();
    harsh.show();
    bhavya.input();
    bhavya.show();

}
