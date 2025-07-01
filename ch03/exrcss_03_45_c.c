// Exercises: 3.45.c
// Page 143
// SINCE THE UINT_MAX ALLOWS US TO CALCULATE THE FACTORIAL OF AN UNSIGNED INT UP TO 12!, WE WILL END THE ESTIMATION ON 13TH STEP
// SINCE MOST MODERN COMPUTER (?) HAS A VALUE FOR UINT_MAX OF 4294967295, ESTIMATION FOR VALUES WHICH GREATER THAN 6 CAN LEAD TO MISINFORMATION
// e^^x = (x^^0 / 0!) + (x^^1 / 1!) + (x^^2 / 2!) + (x^^3 / 3!)...

#include <stdio.h>

int main(void) { // function main begins program execution
	unsigned int counter = 0, exponent = 0; // initializing the variables
	float result = 0.0; // initializing the estimation result

	printf("%s", "Please enter a positive integer to calculate e to the power of x: "); // prompting the user
	scanf("%u", &exponent); // storing the value e to the power of x

	while(counter <= 12) { // while loop begins the estimation of e^^x
		unsigned int x = counter, sum = 1, power = counter, power_sum = 1; // initializing the loop variables

		while(power > 0) { // while loop begins the calculation of the divider part
			power_sum *= exponent; // calculating x^^counter
			power--; // decrement the power by 1
		} // end while

		while(x > 0) { // while loop begins the calculation of x factorial
			sum *= x; // multiply the sum with x on every step
			--x; // decrement the x by 1
		} // end while

		result += (float) power_sum / sum; // convert power_sum to float by using explicit conversion to avoid integer division
		printf("Calculating %u^^%u/%u!, e^^%u is %.5f on this step.\n", exponent, counter, counter, exponent, result); // show the steps
		++counter; // increment the counter by 1
	} // end while

	printf("The estimation of e^^%u is %.5f.\n", exponent, result); // prompting the estimation result
} // end function main
