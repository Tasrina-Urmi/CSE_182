/*Example 2: Write a C++ program to print the Fibonacci series using recursion.*/



#include<iostream>
using namespace std;

int fib(int a)
{
    if(a == 1 || a == 0)
    {
        return a;
    }
    else
    {
        return fib(a - 1) + fib(a - 2);
    }
}

int main()
{
    int terms , i = 0;
    cout<<"Enter the number of terms: ";
    cin >> terms;

    cout<<"Fibonacci series: ";

    while(i < terms)
    {
        cout<< " " << fib(i);
        i++;
    }
    return 0;
}
