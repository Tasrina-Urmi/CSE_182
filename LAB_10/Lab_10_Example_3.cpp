/*Example 3: Write a C++ program to understand how the addresses can be
passed as arguments to a function.*/


#include<iostream>
using namespace std;

void swap(int *n1 , int *n2);

int main()
{
    int num1 = 20 , num2 = 40; //address of num1 and num2 passed

    swap (&num1 , &num2);

    cout<<"Num1 = "<< num1<<endl;
    cout<<"Num2 = "<< num2;

    return 0;

}

void swap(int *n1 ,int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
