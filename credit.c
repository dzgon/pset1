//Implement a program that determines whether a provided credit card number is valid according to Luhn’s algorithm.

// NOT FINISHED YET


#include <stdio.h>
#include <cs50.h>

int main (void)
{
    long card_num = get_long("Number: ");

    long card_save = card_num;

    int sum = 0;
    int mult_sum = 0;
    int temp_sum = 0;
    for (int i = 0; i < 16; i++)
    {
        int last_digit = card_num % 10;
        sum += last_digit;

        card_num = card_num / 10;

        last_digit = card_num % 10;

        temp_sum = last_digit * 2;

        if (temp_sum > 9)
        {
            int place_holder1 = temp_sum % 10;
            temp_sum = temp_sum / 10;
            int place_holder2 = temp_sum % 10;
            mult_sum += place_holder1 + place_holder2;
            temp_sum = 0;
        }

        mult_sum += temp_sum;
        temp_sum = 0;

        card_num = card_num / 10;
    }

    sum = sum + mult_sum;

    if (sum % 10 == 0)
    {
        if (card_save < 10000000000000)
        {
            printf("VISA\n");
        }
        else if (card_save < 1000000000000000)
        {
            printf("AMEX\n");
        }
        else if (card_save > 1000000000000000)
        {
            if ((card_save / 1000000000000000) % 10 == 4)
            {
                printf("VISA\n");
            }
            else
            {
                printf("MASTERCARD\n");
            }
        }
    }
    else
    {
        printf("INVALID\n");
    }

}
