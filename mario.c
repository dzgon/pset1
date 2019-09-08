// Create a mario pyramid for a height n, where n is any positive integer less than
// or equal to 23
#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int mario_height;

    do
    {
        // Prompting the user for a value for height
        mario_height = get_int("Height: ");
    }
    // Repeatedly asking as long as value inputed is negative or greater than 8
    while (mario_height < 1 || mario_height > 23);

    printf("%i\n", mario_height);


    // Repeating loop for number of lines(height) that the pyramid will be
    for(int i = 0; i < mario_height; i++)
    {
        // Creates the spaces before the pyramid blocks to line them up
        for (int j = 0; j + i < mario_height - 1; j++)
        {
            printf(" ");
        }
        // Creates the "blocks" of the pyramid
        for (int k = 0; k < 1 + i; k++)
        {
            printf("#");
        }
        // Creates the spaces between the two half pyramids
        for (int l = 0; l < 2; l++)
        {
            printf(" ");
        }
        // Creates the "blocks" of the pyramid for the other side
        for (int k = 0; k < 1 + i; k++)
        {
            printf("#");
        }

        // Goes to the next line to build next layer of blocks
        printf("\n");
    }

}
