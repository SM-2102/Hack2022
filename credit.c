#include <stdio.h>

int main(void)
{
    int sum1 = 0, sum2 = 0, total = 0;
    int rem = 0, div = 0;
    int digit = 0;
    int last, second_last;
    long long int card, a, b, n, start;
    printf("Enter your Card Number: ");
    scanf("%lld",&card);
    start = card;

    // Check Card length
    n = card;
    do
    {
        n = n / 10;
        digit++;
    }
    while (n > 0);


    if (digit != 13 && digit != 15 && digit != 16)
    {
        printf("Card is INVALID\n");
        return 0;
    }


    //Check whether the card is valid
    while (card != 0)
    {
        //for the last digit
        last = card % 10;
        card = card / 10;
        sum1 = sum1 + last;

        //for the second last digit
        second_last = card % 10;
        card = card / 10;

        //Double second last digit
        second_last = second_last * 2;
        rem = second_last % 10;
        div = second_last / 10;
        sum2 = sum2 + rem + div;
    }
    total = sum1 + sum2;


    //Check Luhn's Algorithim
    if (total % 10 != 0)
    {
        printf("Card is INVALID\n");
        return 0;
    }


    //Getting the start numbers
    do
    {
        start = start / 10;
    }
    while (start > 100);


    //For MASTER CARD
    if (50 < start && start < 56)
    {
        printf("MASTERCARD\n");
    }

    //For AMERICAN EXPRESS
    else if (start == 34 || start == 37)
    {
        printf("AMEX\n");
    }

    //For VISA
    else if (start / 10 == 4)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}