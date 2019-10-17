/* Dominic Merchelski 10/15/19
Implement a program that determines whether a provided credit card number is valid according to Luhn’s algorithm.
*/
#include <stdio.h>
#include <cs50.h>

int main(void)
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

    // Checking to see if credit card is valid
    if (sum % 10 == 0)
    {
        // AMEX must start with 34 or 37
        if (((card_check / (10000000000000))) % 100 == 34 || (card_check / (10000000000000)) % 100 == 37)
        {
            printf("AMEX\n");
        }
        // MASTERCARD must start between 51 and 55
        else if (((card_check / (100000000000000)) % 100) <= 55 && ((card_check / (100000000000000)) % 100) >= 51)
        {
            printf("MASTERCARD\n");
        }
        // VISA must start with a 4 but can be either 13 or 16 digits long
        else if (((card_check / (1000000000000000))) % 10 == 4 || (card_check / (1000000000000)) % 10 == 4)
        {
            printf("VISA\n");
        }

        else
        {
            // If doesnt match listed credit cards, print INVALID
            printf("INVALID\n");
        }
    }
    else
    {
        // If doesnt pass algorithm, print INVALID
        printf("INVALID\n");
    }

}
