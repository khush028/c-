/*pointer = pointer is a variable that holds the memory address of another variable
& = address opreator 
* = value of address opreator 
*/
#include<iostream>
using namespace std;
int main()
{
    int k = 45;
    int *h = &k;
    int **l = &h; //pointer to pointer 
    cout<<"your value of k is "<<k<<endl;
    cout<<"your value of k is "<<&k<<endl;
    cout<<"your value of pointer is "<<*h<<endl;
    cout<<"your value of pointer is "<<**l;
}