/* Practice-1: Write a C++ program to add, subtract, multiply and divide two integers
using the following types of user-defined functions -
• No Argument Passed and No return value
• No Argument Passed but return a value
• Argument Passed but no return value
• Argument passed and returns a value
*/



#include<iostream>
using namespace std;

void addition()
{
    int num1,num2;
    cout<<"Enter number 1: "<<endl;
    cin>> num1;
    cout<<"Enter number 2: "<<endl;
    cin>> num2;

    cout<< num1 <<" + "<< num2 <<" = "<< num1 + num2;
}

int subtraction()
{
    int num1 ,num2;
    cout<<"Enter number 1: "<<endl;
    cin>> num1;
    cout<<"Enter number 2: "<<endl;
    cin>> num2;

    return num1 - num2;

}


void multiply(int num1, int num2)
{
    cout<<num1<<" * "<<num2<< " = "<< num1 * num2;
}

float division(int num1 ,int num2)
{
    return  num1 / num2;
}



int main()
{
    int var1,var2,result;
    char c;
    cout<<"Enter symbol(+ , - ,* , / ): ";
    cin>> c;

    switch(c)
    {

    case '+':
        // No arguments passed and no return value
        addition();
        break;

    case '-':
        // No arguments passed but a return value
        result = subtraction();
        cout<<"Result: "<<result;
        break;

    case '*':
       // Argument passed but no return value
       cout<<"Enter number 1: "<<endl;
       cin>> var1;
       cout<<"Enter number 2: "<<endl;
       cin>> var2;
       multiply(var1,var2);
       break;

    case'/':
        //Argument passed and a return value.
       cout<<"Enter number 1: "<<endl;
       cin>> var1;
       cout<<"Enter number 2: "<<endl;
       cin>> var2;

       result = division(var1 , var2);
       cout<<"Output: "<<result;
       break;

    default:
        cout<< c << "This sign is not found";
    }

    return 0;
}
