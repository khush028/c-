/* call by address or call by reference =  call by a address is used when you want to modify a variable inside a function and want that 
modification persist outside the function . 
*/
#include<iostream>
using namespace std ;
void changevalue(int *p){
    *p=*p+1;
    cout<<"pointer value="<<*p<<endl;
}
int main(){
    int num;
    cout<<"enter value =";
    cin>>num;
    cout<<"original value ="<<num<<endl;
    changevalue(&num);
    cout<<"updated value ="<<num;
}