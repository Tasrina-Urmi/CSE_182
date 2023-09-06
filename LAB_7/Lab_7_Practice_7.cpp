/*Practice 7: Write a C++ program to find the reverse of an array.*/


#include<iostream>
using namespace std;
int main()
{
    int  n,i;
    cout<<"Enter size of array: ";
    cin>> n;

    int array[ n],rev[ n];
    cout<<"Enter "<< n<<" elements in array: ";
    for(i = 0;i <  n; i++)
    {
        cin>>array[i];

    }
    for(i = 0; i< n ; i++)
    {
        rev[i] = array[n-i-1];
    }
    cout<<"Reverse array: ";
    for(i = 0; i < n; i++)
    {
        cout<<" "<<rev[i];
    }
    return 0;
}
