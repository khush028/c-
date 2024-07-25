/* handling =  eception is unepected / uwanted / abnormal situation that occur at 
runtime 
*/
#include<iostream>
#include<stdexcept>
using namespace std;
void depositor(int bal , int curr){
    try
    {
        double amt ; 
        cout<<"enter deposit amount = ";
        cin>>amt;
        if(amt<=0){
            throw invalid_argument("invalid deposit aamount");
        }
        curr = bal+amt;
        cout<<"available amount ="<<curr<<endl;
    }

    catch(exception& e)
    {
    cout<<e.what();
    }
    
}
void withdraw(int total, int rupee){
    try
    {
        double rupee; 
        cout<<"enter withdraw amount = ";
        cin>>rupee;
        if(rupee<=0){
            throw invalid_argument("invalid withdraw amount");
        }
        if(rupee>total){
            throw runtime_error("insufficient balance");
        }
        total = total- rupee;
        cout<<"available amount ="<<total<<endl;
    }

    catch(exception& e)
    {
    cout<<e.what();
    }
}    
    
int main()
{ 
    int bal =1000;
    int curr;
    int total = bal;
    int rupee;
    depositor(bal ,curr);
    withdraw(total,rupee);
    
    
}