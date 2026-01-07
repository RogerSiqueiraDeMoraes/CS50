#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string text = get_string("Type your text:");
    for(int i = 0;text[i] != '\0';i++)
    {
         printf("%c -> %i\n", text[i], text[i]);
    }
}
