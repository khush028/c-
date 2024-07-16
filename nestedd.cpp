/* nestef if = whenever we define if block inside another if block
called nestef if statement 
*/

// find greatest among three a, b , c
#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cout<<"enter your a value ="<<endl;
    cin>>a;
    cout<<"enter your b value ="<<endl;
    cin>>b;
    cout<<"enter your c value ="<<endl;
    cin>>c;

    if(a>b)
    {
        if(a>c)
        {
            cout<<"a is greatest among three";
        }
        else{
            cout<<"c is greatest among three";
        }
    }
    else{
        if(b>c)
        {
            cout<<"b is greatest";
        }
        else{
            cout<<"c is greatest";
        }
    }
}