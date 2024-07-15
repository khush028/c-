// loop = is used to repeat a block of code until the given condition is true 
/* three types
while
dowhile
for
*/
// while =  while loop is used when we don't know the no of iterations in advance .
// it is known as entry or pre test loop

#include<iostream>
using namespace std;
int main()
{
    int password = 12548;
    int mypassword ;
    cout<<"enter your password";
    cin>>mypassword;
    while(password>0)
    {
        if(password!=mypassword)
        {
            //cout<<"incorrect password";
            //break;
            cout<<"enter your password";
            cin>>mypassword;
            
        }
        
        else 
        {
            cout<<"welcome user";
            break;
        }



    
}
}
