// Implement a program that calculates the sum of getting a doubled amount of money each day for a month
#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int days_month;

    do
    {
        days_month = get_int("Days in month: ");
    }
    // Repeatedly prompts user for # of days in the month as long as the
    // inputed value is less than 28 or greater than 31
    while ((days_month < 28) || (days_month > 31));


    // Using the "long long" data type because numbers can get really big
    // and run out of room in the regular "int" data type
    long long start_pen;

    do
    {
        start_pen = get_int("Pennies on first day: ");
    }
    // Repeatedly prompts user for # of pennies on day 1 as long as the
    // inputed value is a negative integer or 0
    while (start_pen < 1);

    // Doubles the starting pennies everyday for each day in the month
    for (int i = 0; i < days_month; i++)
    {
        start_pen = start_pen * 2;
    }


    // Change the data type into a "long double" before converting into dollars
    // and printing so that we can see decimals
    printf("$%.2Lf\n", (long double)(start_pen -1) / 100);
}
