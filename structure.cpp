/* structure = structure is used when we want to allow different different types
of data type into a single name.

once structure is defined, how declare varisble of that type.
*/
#include<iostream>
using namespace std;
struct emp{
    string name ;
    int eid;
    double salary;
};
int main()
{
    struct emp e;
    e.name ="khushbu";
    e.eid = 101;
    e.salary = 52048180;
    cout<<"you name "<<e.name<<" id is "<<e.eid<<" your salary "<<e.salary;
}