// Implement a program that converts degrees in Celsius to Fahrenheit
#include <stdio.h>
#include <cs50.h>

int main (void)
{
    // Prompting user for a temperature in C
    float C = get_float("C: ");

    // Applying formula
    float F = ((C * 9) / 5) + 32;

    // Printing the result
    printf("F: %.1f\n", F);
}
