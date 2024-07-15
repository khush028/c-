// for loop =  for loop is used when we want to perform initialization condition and inc / dec in single line
/* for loop is the most commonly used loop
syntax =
for(intialization;condition;inc/dec)
{
  //statement
}
*/ 

#include<iostream>
using namespace std;
int main()
{
   int a;
   cout<<"enter your number";
   cin>>a;
   for(int i = 1; i <=10 ;++i)
   {
    cout<<a <<"*"<< i <<"="<< a*i <<endl;
   } 
}