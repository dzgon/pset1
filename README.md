# pset1

                                    ---       This is a warning.       ---

                    README.md contains some components to the solutions to cs50's pset1 problems.

               I recommend not continuing to read unless you have already solved the problems yourself,
                               or you are not interested in taking the cs50 course.

------------------------------------------------------------------------------------------------------------

                                                 Background:

I am currently enrolled in cs50 ap. This summer I had discovered cs50 and enrolled my self in that course without knowing that 
my AP CS Principles course used a version of Harvards cs50 course.

Basically I got up to pset 1 but I never actually completed it.

These are my solutions that I wrote in CS50 IDE, which I then copied and pasted it into the text editor ATOM and uploaded to 
github using gitbash.

That would explain why it looked like all of it was done at once or why it may look like I just stole someone elses work.

I completed the work myself, and you guys are free to check its validity in anyway.







-------------------------------------------------------------------------------------------------------------

                                             CS50 Problem: Hello

Functionality: Implement a program that prints out a simple greeting to the user.

- Uses the "printf()" function
  + Prints "hello, world"

-------------------------------------------------------------------------------------------------------------

                                             CS50 Problem: ISBN

Functionality: Implement a program to validate ISBN-10 digit numbers.

- Prompts user to input a ISBN number
  + ISBN number must a positive integer that is 10 digits long.
  If not, the prompt will be repeated along with an occational error message untill it meets those conditions.
  
  
 
- Uses a "for loop" to recursivly apply the algorithm to each digit int the ISBN number
  + Loops 10 times, once for each digit.
  
  + Sets a mutiplier variable (isbn_multiplier), which is equal to the 
  (number of digits in the ISBN number - the current respective digit starting at 0), to applythe correct formula to each digit.
  
  + Takes the last digit of the ISBN number using the % 10 (modular 10) trick and mutiplies
  it by the multiplier variable.
  
  + Then takes the sum of the (product of the digit value and the multiplier variable) and the 
  variable y(which is used to store the sum), which starts at 0.
  
  + Then removes the last digit in the ISBN number.
  
  + It repeats the process for each digit.
  
  + Lastly checks whether or not the final sum "y" is divisable by 11, and outputting "YES" and "NO" repectively.

-------------------------------------------------------------------------------------------------------------

                                             CS50 Problem: Pennies

Functionality: Implement a program that calculates the sum of getting a doubled amount of money each day for a month, per the below.

- Uses a "for loop" to repeatedly double the amount of total pennies everyday for a month
  + Prompts for the number of days in a chosen month. # of days in the month must not be less than 28
  or greater than 31. If not, the prompt will be repeated untill it meets those conditions
  
  + Prompts for the number of starting pennies on day 1. Number of starting pennies has to be greater than 0.
  If not, the prompt will be repeated untill it meets the conditions
  
  + Store the number of pennies on day 1 in a variable called "day_one" for later use
  
  + Use the "for loop" for calculate the total number of pennies on the last day
  
  + Subtract the starting pennies on day 1 from the total amount of pennies
  
  + Divide the number of pennies by 100 to get the dollar amount, change data type to a floating point
  before printing so decimals are visable

-------------------------------------------------------------------------------------------------------------

                                            CS50 Problem: Credit

Functionality: Implement a program that determines whether a provided credit card number is valid according to Luhn’s algorithm.

- Prompts user to input a credit card number
  + There is no restriction as to what can be inputed, if the number is not a valid credit card number
  than it simply will appear as "INVALID"
  
  + "get_long" has a built in system to reject non-numbers anyway
 
 - Uses a for loop to implement the algorithm to each digit of the number recursively
  + Uses "  % 10" to get the last digit, and " / 10" to cut off the last digit so the 
  next one becomes available to be seen.
  
  + The first "last digit" will be added to a individual sum called "sum"
  
  + The next "last digit" will be multiplied by 2, and checked to see if it has 2 digits. If so,
  then the digits will be seperated and the sum of each of the digits will be added to a different
  sum called "mult_sum"
  
  + If the product has one digit, it will just be added to "mult_sum"
  
  + The number is then checked to be "VALID". If it is not, it will simply print "INVALID"
  
  + If it is, then the original card number will be checked using its # of digits and the value of
  the first digit to determine which type of card it is.

-------------------------------------------------------------------------------------------------------------

                                        CS50 Problem: Mario (more comfy) 

Functionality: Implement a program that prints out a double half-pyramid of a specified height.

- Prompts user to input a height
  + Height must be a positive integer and between the values of 1 and 23.
  If not, the prompt will be repeated untill it meets those conditions
  
  
  
- Uses multiple imbedded "for loops" to recursivly print the pyramid
  + Prints spaces (" ") to help align the bricks ("#")
  
  + Spaces follow a pattern where each successive line requires a number of
  spaces equal to the (height - 1 - line#) where line starts at 0
  
  + Bricks follow a pattern where each successive line requires a number of
  bricks equal to the (line# + 1) where line starts at 0
  
  + Used an additional "for loop" to statically add 2 spaces between the two
  brick layers for each row
  
  + Used the same brick algorithm before and after the static 2 spaces to
  achieve the full pyramid shape
  
  Updates:
  + Added an "Error:..." feature to help inform the user if they are not familiar
  with the parameters

-------------------------------------------------------------------------------------------------------------
