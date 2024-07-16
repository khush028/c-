/* else if ladder = used when we have more h=then two 
conditon.
*/

#include<iostream>
using namespace std;
int main()
{
    int signal;
    cout<<"enter your signal (1.red , 3.green, 2.yellow)";
    cin>>signal;
    if(signal==1)
    {
        cout<<"stop your car";

    }
    else if(signal==2)
    {
        cout<<"please wait";

    }
    else
    {
        cout<<"you can go know";
        
    }

}