#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char user_char; string user_string; int user_int;
    int user_input = get_int("1-String\n2-Character\n3-Integer\n\nChoose your option: ");
    if (user_input == 1)
    {
        user_string = get_string("Enter a string : ");
    }
    else if (user_input == 2)
    {
        user_char = get_char("Enter a character : ");
    }
    else if (user_input == 3)
    {
        user_int = get_int("Enter an integer :  ");
    }

    const int _rows = get_int("Rows: ");
    const int _columns = get_int("Columns: ");

    for (int i=0; i<_rows; i++)
    {
        if (user_input == 1)
        {
            //Columns
            for (int j=1; j<_columns; j++)
            {
                printf("%s ", user_string);
            }

            //Rows
            printf("%s\n", user_string);
        }
        else if (user_input == 2)
        {
            //Columns
            for (int j=1; j<_columns; j++)
            {
                printf("%c ", user_char);
            }

            //Rows
            printf("%c\n", user_char);
        }
        else if (user_input == 3)
        {
            //Columns
            for (int j=1; j<_columns; j++)
            {
                printf("%i ", user_int);
            }

            //Rows
            printf("%i\n", user_int);
        }

    }

}
