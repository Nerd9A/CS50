#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main(void)
{
    int operation;
    printf("\n1-Addition\n2-Subtraction\n3-Multiplication\n4-Division\n\nChoose Operation: ");
    scanf("%d", &operation);

    if (operation >= 1 && operation <= 4)
    {
        int x, y;
        printf("\nValue of X: ");
        scanf("%d", &x);
        printf("Value of Y: ");
        scanf("%d", &y);

        if (operation == 1)
        {
            printf("\nSum: %d\n\n", add(x, y));
        }
        else if (operation == 2)
        {
            printf("\nDifference: %d\n\n", subtract(x, y));
        }
        else if (operation == 3)
        {
            printf("\nProduct: %d\n\n", multiply(x, y));
        }
        else if (operation == 4)
        {
            if (y != 0)
            {
                printf("\nQuotient: %d\n\n", divide(x, y));
            }
            else
            {
                printf("Error: Division by zero\n");
            }
        }
    }
    else
    {
        printf("Invalid operation\n");
    }
}

int add(int a, int b)
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
