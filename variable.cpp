// variable is nothing but name of memory location where we store values
// variables are the case sensitive
// start with (a-z),(A-Z) or space arn't allowed and special symbol only underscore allowed(_)
#include<iostream>
using namespace std;
int f = 20; //global variable (we can use this anywhere within the program)
int main()
{
    int a=10; // local variable (we can only use this within the program)
    float b = 10.33;
    static int k = 20;
    double c= 12.5;
    cout<<a<<endl<<b<<endl<<c<<endl<<f<<endl<<k<<endl;
    // sizeof = to know size of datatype
    cout<<"size of int"<<sizeof(int)<<endl;

    // ascii value
    int e = 'a';
    cout<<"ascii of a="<<e;
}