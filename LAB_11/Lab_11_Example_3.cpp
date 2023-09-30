/*Example 3: Write a C++ program to print the sum of array elements using recursion.*/



#include<iostream>
using namespace std;

int arraySum(int arr[] , int size)
{
    if(size <= 0)
    {
        return 0;
    }
    else
    {
        return (arr[size - 1] + arraySum(arr , size - 1));
    }
}

int main()
{
    int arr[] = {2, 4, 5, 8, 9, 2 };
    int n = sizeof(arr) / sizeof arr[0];

    cout<<"Sum of array elements: "<<arraySum(arr , n);
    return 0;
}
