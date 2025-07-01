// Self-Review Exercises: 3.7
// Page 133

#include <stdio.h>

int main(void) { // function main begins program execution
	unsigned int x, y; // declaring variables to calculate x^y

	puts("Please enter a value for x:"); // prompting the user for entering the value of x
	scanf("%u", &x); // storing the value

	puts("Please enter a value for y:"); // prompting the user for entering the value of y
	scanf("%u", &y); // storing the value

	unsigned int i = 1, power = 1; // declaring variables for counter value and power value

	while(i <= y) { // while loop begins multipling
		power *= x; // calculation
		i++; // counter
	} // end while

	printf("%u\n", power); // printing the sum
} // end function main
