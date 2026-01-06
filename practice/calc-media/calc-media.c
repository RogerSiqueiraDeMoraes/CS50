#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Quantas notas? ");

    int scores[n]; 

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Nota %i: ", i + 1);
        sum += scores[i];
    }

    float average = sum / (float) n;
    printf("Média: %.2f\n", average);
}
