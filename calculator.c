#include <cs50.h>
#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main (void)
{

    int operation = get_int("\n1-Addition\n2-Subtraction\n3-Multiplication\n4-Division\n\nChoose Operation : ");

    if (operation >= 1)
    {
        int x = get_int("\nValue of X : ");
        int y = get_int("Value of Y : ");

        if (operation == 1)
        {
            printf("\nSum : %i\n\n", add(x, y));
        }
        else if (operation == 2)
        {
            printf("\nDifference : %i\n\n", subtract(x, y));
        }
        else if (operation == 3)
        {
            printf("\nProduct : %i\n\n", multiply(x, y));
        }
        else if (operation == 4)
        {
            printf("\nQuotient : %i\n\n", divide(x, y));
        }

    }


}

int add(int a,  int b)
{
    return a + b;
}
int subtract(int a, int b)
{
    return a - b;
}
int multiply(int a, int b)
{
    return a * b;
}
int divide(int a, int b)
{
    return a / b;
}

