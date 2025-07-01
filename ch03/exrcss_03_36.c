// Exercises: 3.36
// Page 142
// NOTE: to retrieve the nth digit of a number -> (number / (n-1)th power of 10) mod 10

#include <stdio.h>

int main(void) { // function main begins program execution
	unsigned int counter = 100; // initializing the counter by 100, this will be the number to count to 999

	while(counter <= 999) { // while loop begins the processing of the numbers
		unsigned int digit = 1; // initializing the digit by 1, this variable will be used to loop through the counter's digits
		unsigned int sum = 0; // initializing the sum by 0, this variable will be used to calculate the sum of the cubes of the counter's digits
		unsigned int divisor = 1; // initializing the divisor by 1, this variable will be used to seperate the counter's digits
		unsigned int single_digit = 0; // initializing the single digit by 0, this variable will be used to calculate the cube of a digit

		while(digit <= 3) { // while loop begins the processing of the counter's digits
			if(digit == 1) { // the right-most digit
				divisor = 1; // (counter / 1) % 10
			} // end if
			else if(digit == 2) { // the second digit
				divisor = 10; // (counter / 10) % 10
			} // end else if
			else { // the left-most digit
				divisor = 100; // (counter / 100) % 10
			} // end else

			single_digit = (counter / divisor) % 10; // seperate the digit
			sum += single_digit * single_digit * single_digit; // take the cube of the digit and add it to the sum
			digit++; // increment the digit by 1
		} // end while

		if(sum == counter) { // if the sum of the cubes of the number's digits is equal to the number
			printf("The number %u is a three digit Armstrong number!\n", counter); // printing that the number is an Armstrong Number
		} // end if

		counter++; // increment the counter by 1
	} // end while
} // end function main
