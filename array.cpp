/* array =  array is a collection pf elements of the same data type that are stored 
sequentially in memory

index of array always start with 0.

array stored elemnts contiguously in memory .

*/
#include<iostream>
using namespace std ;
int main()
{
    int a[5] = {1,2,3,4,5}; // method 1
    for(int i=0 ;i<5 ; i++)
    {
        cout<<a[i]<<endl;
    }

    int b[5];
    cout<<"enter array elements : ";
    for(int i=0 ; i<5;i++){
        cin>>a[i];
    }
    for(int i =0; i<5;i++){
        cout<<a[i]<<ends;
    } 
    // reverse order 
    int c[5];
    cout<<"enter your reverse order arrar =";
    for ( int i=0; i<5 ; i++){
        cin>>c[i];
    }
    for(int i=4 ; i>=0; i--){
        cout<<c[i]<<ends;
    }

}