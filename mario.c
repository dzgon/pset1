// Create a mario pyramid for a height n, where n is any positive integer less than
// or equal to 23
#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int mario_height;
    // We use a "do while loop" here instead of a for loop because we need to prompt
    // at least once, and we dont know how many times we will need to loop
    do
    {
        // Prompting the user for an integer to represent the pyramid height
        mario_height = get_int("Height: ");
        
        // Printing an error message to inform the user that the integer must be positive
        if (mario_height < 0)
        {
            printf("Error: Must be a positive integer!\n");
        }
        // Printing an error message to inform the user that the integer cannot be 0
        else if (mario_height == 0)
        {
            printf("Error: Can't be 0!\n");
        }
        // Printing an error message to inform the user that the integer cannot be greater than 23
        else if (mario_height > 23)
        {
            printf("Error: Cannot be greater than 23!\n");
        }
    }
    // Repeatedly prompting as long as the value inputed is negative or greater than 23
    while (mario_height < 1 || mario_height > 23);


    // Repeating loop for a number of times equal to the pyramid height
    for(int i = 0; i < mario_height; i++)
    {
        // Creates the spaces before the pyramid bricks to line them up
        for (int j = 0; j + i < mario_height - 1; j++)
        {
            printf(" ");
        }
        // Creates the "bricks" of the pyramid for the first half
        for (int k = 0; k < 1 + i; k++)
        {
            printf("#");
        }
        // Creates the static spaces between the two halfs of the pyramid
        for (int l = 0; l < 2; l++)
        {
            printf(" ");
        }
        // Creates the "bricks" of the pyramid for the second half
        for (int k = 0; k < 1 + i; k++)
        {
            printf("#");
        }

        // Is used to go to the next line after each loop
        printf("\n");
    }

}
