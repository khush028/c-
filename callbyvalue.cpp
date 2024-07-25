/*call by value = in call by value the actual value of variable can't be changed
if you change the value of function parameter it is only changes for current function .
*/

#include<iostream>
using namespace std;
void change_value(int num){
    num = num +10;
    cout<<num<<endl;
}
int main(){
    int num =10; 
    cout<<num<<endl;
    change_value(num);
    cout<<num<<endl;
}
