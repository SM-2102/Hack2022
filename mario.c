#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Enter Height: ");
    }
    while (n < 1 || n > 8);

    //For ROWS
    for (int i = 0; i < n; i++)
    {
        //For LEFT COLUMB SPACE
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        //For LEFT COLUMB BRICKS
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        //For SPACE between COLUMBS
        printf("  ");

        //For LEFT COLUMB BRICKS
        for (int l = 0; l <= i; l++)
        {
            printf("#");
        }

        //For Next ROW
        printf("\n");
    }
}