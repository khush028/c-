/* if else = is used to execute two statements either if statment or
else statment for a single condition
*/
#include<iostream>
using namespace std;
int main()
{
    int a ;
    cout<<"enter year";
    cin>>a;
    if(a%4==0)
    {
        cout<<"it's a leap year";

    }
    else{
        cout<<"it's not a leap year";
    }
}