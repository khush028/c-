/* string =  string is nothing but sequences of characters .
ex = khushbu 
string index always start with 0
the last character always is null (/0)
pre defined function =  header file <string.h>
strlen() = to find length of the string 
strrev() = to revrse the string
strcat() = concat
strcmp() = compare
strcpy()=  copy 
getline() = string input function
push_back() = back string 
pop_back() = string leavee
*/
#include<iostream>
using namespace std;
int main()
{
    char myName[20];
    cout<<"Enter Your Name";
    //cin>>myName; // we only able to print name before sapce to slove this problem we use gets()
    gets(myName);
    puts(myName);
    //cout<< "welcome user ,"<<myName <<endl;
    
    string myAddress ; // inbuilt class of string in which direct input can take place
    cout<<"Enter Your Address ";
    //cin>>myAddress ;
    getline(cin,myAddress);
   
    cout<<myName <<" your address is "<<myAddress;

}