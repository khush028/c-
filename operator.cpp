//operator = operators are symbols that tells the complier to perform mathematical and logical operations on operands
/*Arithmetic<+,-,*,/,%>
Relational <<,>,<=,>=,==,!=>
Logical<&&,||,!>
Assignment<=,+=,-=,*=,/=>
Increment / Decrement
Trinary(? :)
Bitwise(&,>>,<<,^,~,|)
*/
#include<iostream>
using namespace std;
int main()
{
    //assignment operaotr 
     int a= 10;  // = is assignment operator here
     cout << a<<endl;
      a += 5; // (+=) compund assignment
     cout<<a<<endl;

     // arithmetic 
     int b = 10;
     cout<<"addition = "<<a+b<<endl;
     cout<<"substraction = "<<a-b<<endl;
     cout<<"multiplication = "<<a*b<<endl;
     cout<<"division = "<<a/b<<endl;
     cout<<"modulus = "<<a%b<<endl; 

    // relational 
    cout<<(a>b)<<endl;
    cout<<(a<b)<<endl;
    cout<<(a>=b)<<endl;
    cout<<(a<=b)<<endl;
    cout<<(a!=b)<<endl;
    cout<<(a==b)<<endl;

    //  logical
    cout<<(a>b && a<b)<<endl;
    cout<<(a>b || a<b)<<endl;
    cout<<!(a>b)<<endl;
    cout<<!(a>b && a<b)<<endl;

    // incr / dec
    cout<<++a<<endl;
    cout<<a++<<endl;
    cout<<--a<<endl;
    cout<<a--<<endl;

    // trinary 
    cout<<(a>b ? a:b)<<endl;

    //bitwise
    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(a^b);
    


    

   

     





}