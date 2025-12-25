#include <cs50.h>
#include <stdio.h>

int get_height(void);
void print_space(int);
void print_hash(int);
void print_gap(void);
void print_pyramid(int);

int main(void)
{
    int height = get_height();
    print_pyramid(height);
}

int get_height(void)
{
    int height;
    do
    {
        height = get_int("How high your pyramid should be?\n");
    }
    while (height <= 0);

    return height;
}

void print_space(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }
}

void print_hash(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
}

void print_gap(void)
{
    printf("  ");
}

void print_pyramid(int height)
{
    for (int line = 1; line <= height; line++)
    {
        print_space(height - line);
        print_hash(line);
        print_gap();
        print_hash(line);
        printf("\n");
    }
}
