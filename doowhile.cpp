/*dowhile = do while loop used when we want to w=execute loop body 
atleast once even condition is false

do while loop also know as post test os eit control loop
do
{
  //statement
}
while(condition);
*/
#include<iostream>
using namespace std;
int main()
{
    int password = 123547;
    int userinput;
    cout<<"enter your password";
    cin>>userinput;

    do{
        cout<<"enter your password";
        cin>>userinput;
    }
    while(password!=userinput);

}