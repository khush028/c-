/* polymorphism = polymorphism is a concept in which an object can be treated in different
ways. it means that objects of a class can be used 
as objects of their derived classes.
*/

#include<iostream>
using namespace std;
void showInfo(int age)
{
    cout<<"your age is "<<age<<endl;
}
void showInfo(string name)
{
    cout<<"your name is  "<<name<<endl;

}
void showInfo(double salary)
{
    cout<<"your salary is "<<salary<<endl;

}
int main()
{
    showInfo("Khushbu");
    showInfo(20);
    showInfo(2.500001);

}