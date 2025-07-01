// Self-Review Exercises: 3.5
// Page 133

#include <stdio.h>

int main(void) { // function main begins program execution
	unsigned int sum = 0, x = 1; // declaring and initializing the variables that will be used to calculate the sum of integers from 1 to 10

	while(x < 11) { // loop 10 times
		sum += x; // adding current integer to sum
		x++; // increment the current integer
	} // end while

	printf("The sum is: %u\n", sum); // printing the sum
} // end function main
