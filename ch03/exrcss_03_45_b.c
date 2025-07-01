// Exercises: 3.45.b
// Page 143
// SINCE THE UINT_MAX ALLOWS US TO CALCULATE THE FACTORIAL OF AN UNSIGNED INT UP TO 12!, WE WILL END THE ESTIMATION ON 13TH STEP
// e = (1 / 0!) + (1 / 1!) + (1 / 2!) + (1 / 3!)...

#include <stdio.h>

int main(void) { // function main begins program execution
	unsigned int counter = 0; // initializing the counter
	float e = 0.0; // initializing the e

	while(counter < 13) { // while loop begins the calculation of e
		unsigned int x = counter, sum = 1; // initializing the x to counter and sum to 1 on every step

		while(x > 0) { // while loop begins the calculation of x factorial
			sum *= x; // multiply the sum with x on every step
			--x; // decrement the x by 1
		} // end while

		e += (float) 1 / sum; // convert 1 to float by using explicit conversion to avoid integer division
		printf("Calculating 1/%u!, e is %.5f on this step.\n", counter, e); // show the steps
		++counter; // increment the counter by 1
	} // end while

	printf("The estimation of e is %.5f\n", e); // prompting the e estimation result
} // end function main
