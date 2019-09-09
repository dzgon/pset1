//Implement a program that determines whether a provided credit card number is valid according to Luhn’s algorithm.
#include <stdio.h>
#include <cs50.h>

int main (void)
{
    // Prompt user for card number
    long card_num = get_long("Number: ");

    // Save the initial card number to be later differentiated if valid
    long card_check = card_num;

    // The sum of the digits that were just added
    int sum = 0;

    // The sum of the digits that were multiplied by 2 and then added
    int mult_sum = 0;

    // Algorithm which finds the sum for but "sum", and "mult_sum"
    for (int i = 0; i < 16; i++)
    {
        int temp_sum = 0;
        // Taking the last digit and adding it to the sum
        int last_digit = card_num % 10;
        sum += last_digit;

        // Chopping off the previously last-digit
        card_num = card_num / 10;

        // Taking the next last-digit and multipliying it by 2
        last_digit = card_num % 10;
        temp_sum = last_digit * 2;

        // Checking to see if the product has 2 digits
        // If so we need to add the digits of the product to mult_sum not the product
        if (temp_sum > 9)
        {
            int place_holder1 = temp_sum % 10;
            temp_sum = temp_sum / 10;
            int place_holder2 = temp_sum % 10;
            mult_sum += place_holder1 + place_holder2;
            temp_sum = 0;
        }

        // If only 1 digit, then just add to mult_sum
        mult_sum += temp_sum;
        temp_sum = 0;

        // Chopping the last used digit
        card_num = card_num / 10;
    }

    // Adding both sums together
    sum += mult_sum;

    //Checking whether the number is valid or not
    if (sum % 10 == 0)
    {
        // VISA cards have 13 digits, so we are checking for that
        if (card_check < 10000000000000)
        {
            printf("VISA\n");
        }
        // American Express card have 15 digits, so we check for that here
        else if (card_check < 1000000000000000)
        {
            printf("AMEX\n");
        }
        // Both VISA and MASTERCARD can have 16 digits
        else if (card_check > 1000000000000000)
        {
            // However VISA must start with a 4
            if ((card_check / 1000000000000000) % 10 == 4)
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
