#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
void compute_ciphertext(string plaintext, string key);

int main(int argc, string argv[])
{
    //test
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Key must only contain alphabetic characters.\n");
            return 1;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        for (int j = i + 1; j < 26; j++)
        {
            if (tolower(argv[1][i]) == tolower(argv[1][j]))
            {
                printf("Key must not contain repeated characters.\n");
                return 1;
            }
        }
    }
    //print
    string plaintext = get_string("plaintext: ");
    compute_ciphertext(plaintext, argv[1]);

    return 0;
}

void compute_ciphertext(string plaintext, string key)
{
    printf("ciphertext: ");

    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if (isupper(plaintext[i]))
        {
            int index = plaintext[i] - 'A';
            printf("%c", toupper(key[index]));
        }
        else if (islower(plaintext[i]))
        {
            int index = plaintext[i] - 'a';
            printf("%c", tolower(key[index]));
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
}
//submit50 cs50/problems/2026/x/substitution
