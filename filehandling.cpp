/* file handling =  is a prcess of reading and writing data to files.
c++ file handling allow you to share output of a program in a file and also read file data on console. 
*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //write data 
    ofstream onFile;
    onFile.open("C:\\Users\\HP\\OneDrive\\Desktop\\file.text");
    onFile<<"harsh is a good boy";
    cout<<"file created"<<endl;
    onFile.close();
    //read data
    ifstream inFile;
    string str;
    inFile.open("C:\\Users\\HP\\OneDrive\\Desktop\\file.text");
    while(getline(inFile ,str)){
        cout<<str;
    }
    inFile.close();
    //copy data 
    /*ifstream inFile ;
    ofstream onFile ;
    char k;
    inFile.open("C:\\Users\\HP\\OneDrive\\Desktop\\file.text");
    onFile.open("C:\\Users\\HP\\OneDrive\\Desktop\\file.text2");
    while(inFile.get(k)){
        onFile.put(k);
    }
    cout<<"copied the data suscessfully ";
    inFile.close();
    onFile.close();*/

    //delete the file 
    remove("C:\\Users\\HP\\OneDrive\\Desktop\\file.text");
}