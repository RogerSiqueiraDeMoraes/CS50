#include <cs50.h>
#include <stdio.h>

int get_rown(void);
int get_coln(void);
void print_block(int rown,int coln);

int main(void)
{
    int rown = get_rown();
    int coln = get_coln();
    print_block(rown, coln);
}

int get_rown(void)
{
    int rown;
    do
    {
        rown = get_int("Type how many rows your block will have:\n");
    }
    //Input validation loop
    while(rown <= 0);
    return rown;
}

int get_coln(void)
{
    int coln;
    do{
        coln = get_int("Type how many columns your block will have:\n");
    }
    //Input validation loop
    while(coln <= 0);
    return coln;
}

void print_block(int rown,int coln)
{
    for(int row = 0;row < rown;row++)
    {
        for(int col = 0;col < coln;col++)
        {
            printf("#");
        }
        printf("\n");
    }
}
