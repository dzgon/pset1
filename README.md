# pset1

This is a warning.

README.md contains some components to the solution to cs50's pset1 mario problem.

I recommend not continuing to read unless you have already solved the problem yourself,
or you are not interested in solving it.

------------------------------------------------------------------------------------------------------------






background:

I am currently enrolled in cs50 ap. This summer I had discovered cs50 and enrolled my self in that course without knowing that 
my AP CS Principles course used a version of Harvards cs50 course.

Basically I got up to pset 1 (the mario one) but I never actually completed it.

This is my solution that I wrote in CS50 IDE, which I then copied and pasted it into the text editor ATOM and uploaded to 
github using gitbash.

That would explain why it looked like all of it was done at once or why it may look like I just stole someone elses work.

I completed the work myself, and you guys are free to check its validity in anyway.







-------------------------------------------------------------------------------------------------------------






CS50 Problem: Mario (more comfy) 

Functionality: Prints a mario-like double sided pyramid

-Prompts user to input a height
  + Height must be a positive integer and between the values of 1 and 23.
  If not, the prompt will be repeated untill it meets those conditions
  
  
  
-Uses multiple imbedded "for loops" to recursivly print the pyramid
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

