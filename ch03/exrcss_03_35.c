// Exercises: 3.35
// Page 142
// NOTE: to retrieve the nth digit of a number -> (number mod nth power of 10) / (n-1)th power of 10

#include <stdio.h>

int main(void) { // function main begins program execution
	int binary = 0; // initializing the binary integer that will be converted
	int digit_counter = 1; // initializing the digit counter that will be used to determine the nth digit that will be processed
	int sum = 0; // initializing the sum that converted to decimal so far
	int remainder_digit = 1; // initializing the remainder digit that will be used to calculate the remainder. Since we can not use the pow func, we should stick to while loop and this digit variable
	int divisor_digit = 0; // initializing the divisor digit that will be used to calculate the divisor. Since we can not use the pow func, we should stick to while loop and this digit variable
	int remainder = 1; // initializing the remainder by 1 to determine the nth digit of a number
	int divisor = 1; // initializing the divisor by 1 to  determine the nth digit of a number
	int single_digit = 0; // initializing the seperated digit by 0 to calculate the decimal integer
	int power_digit = 1; // initializing the power digit by 1, this will be used to calculate the nth power of 2. Since we can not use the pow func, we should stick to while loop and this digit variable
	int power = 1; // initializing the power of 2 by 1 since first digit of a binary integer has a power 1

	printf("%s", "Please enter a binary integer at most 5 digits: "); // prompting the user to input a binary integer
	scanf("%d", &binary); // storing the variable

	while(digit_counter <= 5) { // while loop begins the processing of digits one by one
		remainder_digit = digit_counter; // assign digit counter to remainder digit, we are using seperate int because digit counter should not be decrement while calculating the remainder
		divisor_digit = digit_counter - 1; // assign digit counter minus 1 to divisor digit, we are using seperate int because digit counter should not be decrement while calculating the divisor
		power_digit = digit_counter; // assing digit counter to power digit, we are using seperate int because digit counter should not be decrement while calculating the nth power of 2
		remainder = 1; // remainder should re-initialize by 1 for each single digit
		divisor = 1; // divisor should re-initialize by 1 for each single digit
		power = 1; // power should re-initialize by 1 for each single digit

		while(remainder_digit > 0) { // while loop begins calculating the remainder that will be used in the most-outer calculation
			remainder *= 10; // power of 10
			remainder_digit--; // decrement the remainder digit by 1
		} // end while

		while(divisor_digit > 0) { // while loop begins calculating the divisor that will be used in the most-outer calculcation
			divisor *= 10; // power of 10
			divisor_digit--; // decrement the divisor digit by 1
		} // end while

		while(power_digit > 1) { // while loop begins calculating the nth power of 2 to convert the binary integer to decimal
			power *= 2; // power of 2
			power_digit--; // decrement the power digit by 1
		} // end while

		single_digit = (binary % remainder) / divisor; // calculating the single digit
		sum += single_digit * power; // adding the decimal equivalent of a single digit to sum
		digit_counter++; // go for the next digit
	} // end while

	printf("Decimal equivalent of the binary integer is %d\n", sum); // printing the decimal equivalent of the binary integer
} // end function main
