/*
switch = switch statement is nothing but multiple choice 
statement it means whic we want to select any one case
out of multiple cases.
syntax 
switch(exp)
{
   case 1 : statement;
             break;
   c ase n : statement ;
              break;
   default: statement;                  
}
*/

#include<iostream>
using namespace std ;
int main()
{
    int a;
    int b;
    int choice ;
    cout<<"enter your a";
    cin>>a;
    cout<<"enter your b";
    cin>>b;
    cout<<"enter you choices \n 1.add \n 2.sub \n 3.mul \n 4.div \n";
    cin>>choice;
    switch(choice)
    {
        case 1 : cout<<"add = "<<a+b;
        break;
        case 2 : cout<<"sub = "<<a-b;
        break;
        case 3 : cout<<"mul = "<<a*b;
        break;
        case 4 : cout<<"div = "<<a/b;
        break;
        default: cout<<"invaild choice";
        

    }


}