#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
    int a = 10;
    float b= 20.3;
    //typeid = will give us idea about type of data  
    cout<<typeid(a).name()<<endl;
    // implicit typecasting = complier itself convert it 
    double a2 = a;
    cout<<a2<<endl;
    cout<<typeid(a2).name()<<endl;
    
    //explicit casting = programmer convert the data
    int b2 = (int)b;
    cout<<"before value of b  "<<b<<"  after typecasting "<<b2<<endl;



}