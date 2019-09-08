// Check the correctness of an inputed ISBN number
#include <stdio.h>
#include <cs50.h>

int main (void)
{
    long user_number;

    do
    {
        // Prompting user for ISBN number
        user_number = get_long("ISBN: ");

        // Displaying "Error:..." message to inform user of paremeters
        if ( !(user_number < 10000000000) || !(user_number > -1))
        {
            printf("Error: Invalid input, must be a positive integer with 10 digits\n");
        }
    }
    // Repeatedly prompting user for ISBN number as long as the integer has more than 10 digits or is a negative number
    while (user_number > 9999999999 || user_number < 0);

    int y = 0;

    // Using the algorithm for checking ISBN numbers
    for (int i = 0; i < 10; i++)
    {
        int x;
        // Setting what number to multiple based on respective digit
        int isbn_multiplier = 10 - i;

        // First part of formula, multiplying the digit value with its relative place
        x = (user_number % 10) * isbn_multiplier;

        // Taking the sum of all of the digit values multiplied by their relative place
        y = y + x;

        // Going to the next digit
        user_number = user_number / 10;

    }

    // Checking to see if it is a valid ISBN number (divisable by 10)
    if (y % 11 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }


}
