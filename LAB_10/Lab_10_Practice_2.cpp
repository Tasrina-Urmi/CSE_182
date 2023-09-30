/*Practice-2: Write a C++ program to add two numbers using pointers.*/




#include<iostream>
using namespace std;

int main()
{
    int n , m , sum;
    int *num1 = &n , *num2 = &m , *s = &sum;

    cout<<"Enter two integer: ";
    cin >> n >> m;

    *s = *num1 + *num2;

    cout<< "Sum: "<<sum;

    return 0;
}
