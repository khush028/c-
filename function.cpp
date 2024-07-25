/* function = is nothing but block of code which takes input processes it and produce output in
the form result.

functiom run only when when it call 

types 
uses defined             pre defined
add()                    strcpy()
sum()                    strrev()
*/ 

// user defined 
#include<iostream>
using namespace std;
void factorial(int n)
{
    
    int su = 0;
    int mul = 1;
    for(int i=n ; i>0 ;i--){
    su = su + mul ;
    mul = mul * i;

    
    
   }
cout<<"your factorial is "<<mul;    
  


}

int main(){
    int n;
    cout<<"enter your number";
    cin>>n;
    factorial(n);
}
