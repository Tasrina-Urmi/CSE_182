/*Practice 9: Write a C++ program to delete an element from an array.*/


#include<iostream>
using namespace std;
int main()
{
    int n,i,delElem,count = 0;

    cout<<"Enter the size of an array: ";
    cin >> n;

    int array[n];
    cout<< "Enter "<<n<<" elements in array: ";

    for(i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cout<<"\nEnter element to be delete: ";
    cin>> delElem;

    for (i =0; i < n; i++)
    {
        if(array[i] == delElem)
        {
            for(int j = i; j < (n-1); j++)
            {
                array[j] = array[j + 1];
            }
            count++;
            break;
        }
    }

    if(count == 0)
    {
        cout<<"\nElement not found..!!\n";
    }
    else
    {
        cout<<"\nElement deleted successfully.."<<endl;

        cout<<"New array after Deletion:\n";
        for(i = 0; i < (n - 1); i++)
        {
            cout<<array[i]<<" ";
        }
    }
    return 0;
}
