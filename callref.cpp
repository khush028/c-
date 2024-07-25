/* call ref = reference is nothing but alias to an existing variable . when yoyu declare
 a reference you create a new name for an existing variables and any changed done 
 in reference is treated as if it were the original variable 

*/
#include<iostream>
using namespace std ;
int main()
{
    int a = 100;
    cout<<a<<endl;
    int &ref  = a;
    cout<<"reference value = "<<++ref<<endl;
    cout<<a;


}