#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
//
string get_word(int n);
int compute_score(int n);
//
int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
string word[2];
string player[2];
int score[2];

int main(void)
{
    for (int i = 0; i < 2; i++)
    {
        player[i] = get_word(i);
        compute_score(i);
    }
    if (score[0] > score[1])
    {
        printf("Player 1 wins!\n");
    }
    else if (score[0] < score[1])
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

string get_word(int n)
{
    do
    {
        word[n] = get_string("Player %i:", n+1);
    }
    while (strlen(word[n]) <= 0);
    return word[n];
}

int compute_score(int n)
{
    for (int i = 0, lenght = strlen(word[n]); i < lenght; i++)
    {
        if (islower(word[n][i]))
        {
            score[n] += points[word[n][i] - 'a'];
        }
        else if (isupper(word[n][i]))
        {
            score[n] += points[word[n][i] - 'A'];
        }
    }
    return score[n];
}

