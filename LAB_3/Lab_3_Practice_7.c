/*Practice-7: . Write a C program to find all roots of a quadratic equation.*/



#include<stdio.h>
#include<math.h>

int main()
{

    float  a, b, c,D , x, y;
    printf("The equation: ax^2 + bx + c\nEnter the value of a, b ,c: ");
    scanf("%f%f%f",&a ,&b ,&c);

    D = (b * b)-(4 * a * c);

    if(D >= 0)
    {
        x = (-b + sqrt(D)) / (2 * a);
        y = (-b - sqrt(D)) / (2 * a);
        printf("%.2fx^2 + %.2fx + %.2f roots are %.2f and %.2f",a,b,c,x,y);
    }
    else
    {
      printf("%.2fx^2 + %.2fx + %.2f this equation have imaginary roots.",a , b, c);
    }

    return 0;
}

