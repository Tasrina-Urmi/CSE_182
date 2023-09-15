/*Example-6: Calculator*/



#include<iostream>
using namespace std;

int addition(int num1 , int num2)
{
    return num1 + num2;
}
int subtraction(int num1 , int num2)
{
    return num1 - num2;
}
int multiplication(int num1 , int num2)
{
    return num1 * num2;
}
int division(int num1 , int num2)
{
    return num1 / num2;
}

int main()
{
    int var1,var2 ,result;
    char c;
    cout<<"Enter number 1: "<<endl;
    cin>>var1;
    cout<<"Enter number 2: "<<endl;
    cin>>var2;
    cout<<"Enter symbol: "<<endl;
    cin>>c;

    switch (c)
    {
    case'+':
        result = addition(var1 ,var2);
        break;
    case'-':
        result = subtraction(var1 ,var2);
        break;
    case'*':
        result = multiplication(var1 ,var2);
        break;
    case'/':
        result = division(var1 ,var2);
        break;
    default:
        cout<< c <<"This Sign is not found";
        goto end;
    }

    cout<< var1 << " "<< c <<" "<< var2 <<"  = "<<result;
    end:
        return 0;

}


