/*Function Type - 4: Argument passed and a return value.


Example: Write a C++ program to demonstrate the use of function type-4.*/


#include<iostream>
using namespace std;
int addition(int num1 ,int num2)
{
    int sum ;
    sum = num1 + num2;
    return sum;
}

int main()
{
    int var1 ,var2;
    cout<<"Enter number 1: "<<endl;
    cin>> var1;
    cout<<"Enter number 2: "<<endl;
    cin>> var2;

    int res = addition(var1 ,var2);//calling function
    cout<<"Output: "<<res;

    return 0;

}
