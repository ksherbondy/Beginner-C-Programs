/*
File: printf.c
Author: Kris Sherbondy
Date: 26 May 2020
Purpose: The purpose of this program is to help understand how to use conditionals and assignment statements when using the 
printf() function in the C Programming language. 
*/

#include <stdio.h>

int main() {
	
	int i = 9;

	printf("%d %d %d %d %d %d\n", i < 99, i > 99, i = 999, i == 0, i = 0, i > 99);
	
	return (0);
}

/*
Breakdown:

We declare an integer varible named i and initialize it's value to 9 on line 13. In the printf() function we format the output
of 6 integers into a string. The values passed into the function are:

i < 99
i > 99
i = 999
i == 0
i = 0
i > 99

The output of this program is:

1 0 999 0 0 0

The program is able to compile without any errors however the following warning is given by the compiler:

warning: unsequenced modification and access to 'i' [j-Wunsequenced]

First let's understand the output of the program before we dive into why the warning was issued by the compiler. 

The first value of i passed to the printf() function is a conditional value. The condition poses the question is i less than 
99? So the question is, is 9 less than 99? Well 9 is less than 99 so the conditional statement returns true (which equals 1 
since the statement is true otherwise the value is 0) which we see returned when the program is executed. 

The second value passed to the printf() function is also a conditional value equivelent to is 9 greater than 99? Since 9 is not
greater than 99 the condition is false and returns the value of 0 which is then displayed.

The third value passed to the printf() function is an assignment value which is i = 999. This tells the program to set the 
value of i to 999 and then print the value onto the screen.

In the fourth value we see the conditional statement ask i == 0? Which translates to is i equal to 0? However, we must remember
that we changed the value of i to 999 in the argument we previously passed to the printf() function. Therefore the question is, 
is 999 equal to 0? This evaluates to false and the value 0 is returned and printed to the screen.

In the fifth value we have another assignment statement of i = 0 which states the value of i is 0. Which the printf() function
is happy to display the new value of i to the screen.

The last value is another conditional statement of i > 99? Meaning is i greater than 99 which of course we know is not true so 
the condition returns 0 which is then printed to the screen.

This brings us to the warning message the compiler gave us once the program was compiled. What does it mean when it states that
there was unsequenced modification and access to variable i? To understand what's going on Let's change the printf() 
statement to:

printf("%d\n", i + 12);

Once we compile and run this we do not get any warnings or errors from the compiler. Let's change the printf statement again
and rerun:

printf("%d %d %d\n", i, i + 12, i);

Again once this is compiled and ran and we do not get any warnings or errors. Let's look at one last example to understand what
is going on:

printf("%d %d\n", i = i + 12, i);

Aha!!! This time we get the same warning message from the compiler. Look at the code examples again very carefully. The 
difference lies in what we are doing with the actual value of the variable. Look closely at the following statements:

i < 99
i > 99
i + 12
i == 0

These statements do not have any effect on the stored value of the variable. The first two are conditional statements asking 
if a given statement is true or not. The value of the condition is then printed to the screen. The value of i is only used as 
an arguement of the conditional statement. As for i + 12 the same thing can be explained. The value of i is being used as an 
arguement for an arithmitic evaluation. Simply stated add i to 12 and then print the value. The last statement is also a 
conditional statement asking if the value of i is equal to 0. Again these statements do not change the value of i in the 
programs memory.

The problem statements therefore are:

i = 999 
i = 0
i = i =12

These three statements are the culprits responsible for the warning. Statements like these cause the stored value of i to be 
changed in the programs memory. By using the assignment operator (=) we are telling the program to change the value of i to
the new value to the right of the assignment operator and then print this new value to the screen. Now any time i is called the
new value is used and the old value is lost. The compiler is warning you that you have done something unexpected. The printf()
function is typically used only for formatting strings not manipulating stored values. Changing stored values by using printf()
can have unexpected side effects on your program! So becareful when using the is equal too (==) operator in printf() statements.

*/


