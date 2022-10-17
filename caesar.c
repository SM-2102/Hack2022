#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //When Number of Argument Count are 2
    if (argc == 2)
    {
        //For Checking length of the string in location Argument Vector (argv[1])
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            //If the string stored in location 2 or argv[1] cannot be converted to integer
            //[i] is for the number of characters in the string and if the character is cannot be converted to integer it returns 1
            if (!isdigit(argv[1][i]))
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }

        int k = atoi(argv[1]);

        string plaintext = get_string("Plaintext: ");

        //Ciphering text
        for (int i = 0, n = strlen(plaintext); i < n; i++)
        {
            if (plaintext[i] >= 'A' && plaintext[i] <= 'Z')
            {
                plaintext[i] = (plaintext[i] - 65 + k) % 26 + 65;
            }

            else if (plaintext[i] >= 'a' && plaintext[i] <= 'z')
            {
                plaintext[i] = (plaintext[i] - 97 + k) % 26 + 97;
            }
        }
        printf("Ciphertext: %s\n", plaintext);
    }

    //When the location of the argument count is anything other than 2
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

}