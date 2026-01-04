#include <cs50.h>
#include <stdio.h>

long get_card(void);
int card_check(long card_number);
int card_brand_check(long card_number);
int card_length(long number);

int main(void)
{
    long card_number = get_card();
    int a = card_check(card_number);
    int b = card_brand_check(card_number);
    if (a == 1)
    {
        switch (b)
        {
            case 1:
                printf("MASTERCARD\n");
                break;
            case 2:
                printf("AMEX\n");
                break;
            case 3:
                printf("VISA\n");
                break;
            case 4:
                printf("INVALID\n");
                break;
        }
    }
    else
    {
        printf("INVALID\n");
    }
}

long get_card(void)
{
    long card_number;
    do
    {
        card_number = get_long("Number: ");
    }
    while (card_number <= 0);
    return card_number;
}
int card_check(long card_number)
{
    int sum = 0;
    int flip = 0;

    while (card_number > 0)
    {
        int digit = card_number % 10;

        if (flip)
        {
            digit *= 2;
            if (digit > 9)
            {
                digit -= 9;
            }
        }

        sum += digit;
        flip = !flip;
        card_number /= 10;
    }

    if (sum % 10 == 0)
    {
        return 1; // valid
    }
    else
    {
        return 2; // invalid
    }
}

// checks the card brand
int card_brand_check(long card_number)
{
    int length = card_length(card_number);
    long temp = card_number;

    // get first two digits
    while (temp >= 100)
    {
        temp /= 10;
    }

    int first_two = temp;
    int first_one = temp / 10;

    // AMEX
    if ((first_two == 34 || first_two == 37) && length == 15)
    {
        return 2;
    }

    // MASTERCARD
    if (first_two >= 51 && first_two <= 55 && length == 16)
    {
        return 1;
    }

    // VISA
    if (first_one == 4 && (length == 13 || length == 16))
    {
        return 3;
    }

    return 4; // INVALID
}
int card_length(long number)
{
    int length = 0;
    while (number > 0)
    {
        number /= 10;
        length++;
    }
    return length;
}
