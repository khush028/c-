/* jump staement = is a  statement that can transfer the program
control to a different part of the program.

three jumping statement 
goto = goto out work same as break 
continue = it will continue the loop and not print the conditon one
return = we use this in function 
break = it will break the loop when the condition is satisfy
*/
#include<iostream>
using namespace std;
int main()
{
     int i ;
     for(i= 1 ; i<=10; i++)
     {
        if(i==5)
        {
            //break; output = 1234
            //continue ; // output = 1234678910
            goto out ;

        }
        cout<<i<<ends;

     }
     out:
     cout<<"hello";
}
