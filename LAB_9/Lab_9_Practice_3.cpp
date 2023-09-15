/*Practice-3: Write a C++ program to get the largest element of an array using the function.*/


#include<iostream>
using namespace std;

int largeNum(int arr[ ] ,int size )
{
    int max = arr[0];

    for(int i = 0; i < size ; i++)
    {
        if(arr[i] > max)
        {
             max = arr[i];
        }
    }
    return max;

}

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>> n;
    cout<<"Enter elements: "<<endl;

    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }


    cout << "Largest element of an array: "<<  largeNum(arr , n) <<endl;

    return 0;
}
