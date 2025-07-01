// Exercises: 3.45.a
// Page 143

#include <stdio.h>

int main(void) { // function main begins program execution
	unsigned int x = 1, sum = 1; // initializing the variables

	printf("%s", "Please enter a non-negative integer: "); // prompting the user for input
	scanf("%u", &x); // storing the variable
	unsigned int first_x = x; // initializing the first x to x to print later

	while(x > 0) { // while loop begins the calculation of x factorial
		sum *= x; // multiply the sum with x on every step
		--x; // decrement the x by 1
	} // end while

	printf("%u factorial is %u\n", first_x, sum); // prompting the x factorial result
} // end function main
