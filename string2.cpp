#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   string mypassion;
   cout<<"enter your passion";
   cin>> mypassion;
   cout<<"best of luck for "<<mypassion <<endl;
   mypassion.push_back('A');
   cout<<mypassion<<endl;
   mypassion.pop_back();
   cout<<mypassion<<endl;

   char str[] = "khushbu";
   int l = strlen(str); //length
   cout << l <<endl;
   cout<<strrev(str)<<endl; //reverse
   char str1[10];
   strcpy(str1,str); //copy
   cout<<str1<<endl;
   char str2[] =" =khushbu";
   strcat(str,str2); //concate
   cout<<str<<endl;
   int value = strcmp(str,str2);
   if(value==0){
    cout<<"equal";
   }
   else{
    cout<<"not equal";
   }


   
}