/* macros =  is a preprocessor directive that describes that definnes
a name or a function like macro that can be used 
without the code.

it replace the name of macro to value of macro . 
macro is defined using the #define preprocessor direcive . 
*/
#include<iostream>
using namespace std;
#define pi 3.14
#define square(r) ((r)*(r))
int main()
{
    int r ;
    cout<<"enter your radius =";
    cin>>r;
    cout<<"your area of rectangle ="<<pi*square(r);
}