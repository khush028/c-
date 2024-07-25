/* union = union is user defined data type that allows
you to share different data types in the same memory location.
union keyword is used to define union .
size of union depends on th biggest member of union .
once union is defined now declare variables of that type.
*/
#include<iostream>
using namespace std;
union emp{
    int eip;
    double salary ;
    char empname;
    float amount;
};
int main()
{
    union emp e ;
    e.eip = 101;
    cout<<"id no "<<e.eip;
    e.salary = 8000;
    e.empname = 'k';
    e.amount = 1.254869;
    cout<<"  your record is "<<e.empname<< " have salary "<<e.salary<<" total amount "<<e.amount;
    cout<<sizeof(e);
}