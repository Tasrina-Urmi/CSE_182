/*Example-3:Write a C++ program to demonstrate the use of function type-3.*/



#include<iostream>
using namespace std;

void addition(int num1, int num2)
{
    int sum;
    sum = num1 + num2;
    cout<<"Output: "<<sum;
}

int main()
{
    int var1, var2;
    cout<<"Enter number 1: "<<endl;
    cin>> var1;
    cout<<"Enter number 2: "<<endl;
    cin>> var2;

    addition(var1 ,var2); //calling the function

    return 0;
}
