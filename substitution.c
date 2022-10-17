#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>


int main(int argc, string argv[])
{
    if (argc == 2)
    {
        //When there are 26 characters in string
        if (strlen(argv[1]) == 26)
        {
            //Checking each characters in string(array) where [i] is the array number
            for (int i = 0, n = strlen(argv[1]); i < n; i++)
            {
                //If the characters in the string is alphabet or not
                if (!isalpha(argv[1][i]))
                {
                    printf("Key must only contain Alphabetic Characters\n");
                    return 1;
                }

                //Check for repeated alphabet
                for (int l = i + 1; l < n; l++)
                {
                    if (toupper(argv[1][i]) == toupper(argv[1][l]))
                    {
                        printf("Key must not contain repeated Characters\n");
                        return 1;
                    }
                }

            }
            //Get Plaintext
            string plaintext = get_string("Plaintext: ");

            //Going through each characters in string
            for (int j = 0, n = strlen(plaintext); j < n; j++)
            {
                //For LOWERCASE CHARACGERS
                if (plaintext[j] >= 'a' && plaintext[j] <= 'z')
                {
                    plaintext[j] = argv[1][plaintext[j] - 97];
                    plaintext[j] = tolower(plaintext[j]);
                }

                //For UPPERCASE CHARACTERS
                else if (plaintext[j] >= 'A' && plaintext[j] <= 'Z')
                {
                    plaintext[j] = argv[1][plaintext[j] - 65];
                    plaintext[j] = toupper(plaintext[j]);
                }

            }
            printf("ciphertext: %s\n", plaintext);
        }


        //If Characters are not 26 in string
        else
        {
            printf("Key must contain 26 Characters\n");
            return 1;
        }
    }

    //When Location is other than argv[1]
    else
    {
        printf("./substitution KEY\n");
        return 1;
    }
}