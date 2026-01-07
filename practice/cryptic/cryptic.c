#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
    string text = get_string("Text: ");
    int cryp = get_int("How many numbers: ");

    for(int i = 0,n = strlen(text);i<n;i++)
    {
        printf("%c", text[i]+cryp);
    }
    printf("\n");
}
