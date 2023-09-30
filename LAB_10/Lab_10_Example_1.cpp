/*Example-1: Write a C++ program to demonstrate the working of pointers.*/

#include<iostream>
using namespace std;

int main()
{
    int* pc , c;

    c = 22;
    cout<<"Address of c: "<< &c <<endl;
    cout<<"Value of c: "<< c <<endl<<endl;

    pc = &c; //Assigning address to pointers
    cout<<"Address of pointer: "<< pc <<endl;
    //Get value of thing pointed by pointers
    cout<<"Content of pointer pc: "<< *pc << endl<< endl;

    c = 11; //Changing value pointed by pointers
    cout<<"Address of pointer: "<<pc << endl;
    cout<<"Content of pointer pc: "<< *pc << endl<< endl;

    *pc = 2; //Changing value pointed by pointers
    cout<<"Address of  c: "<< &c << endl;
    cout<<"Value of c: "<< c << endl<< endl;

    return 0;




}
