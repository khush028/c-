/* recursion =  a function that calls itself called recursive function
*/
#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}    

int main(){
    int n;
    cout<<"enter your number =";
    cin>>n;
    int c = factorial(n);
    cout<<"your factorial is "<<c;

}