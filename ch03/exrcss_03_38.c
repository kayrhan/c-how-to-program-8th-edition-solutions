// Exercises: 3.38
// Page 142
// NOTE: to retrieve the nth digit of a number -> (number / (n-1)th power of 10) mod 10

#include <stdio.h>

int main(void) { // function main begins program execution
	unsigned int number = 10000; // initializing the number by 10000, this will be the number that we will examine how many 9s it includes
	unsigned int nines = 0; // initializing the nines by 0, we will increment this variable if we found 9 in the number

	printf("%s", "Please enter an integer with 5 digits or fewer: "); // prompting the user to enter the number with the most 5 digits
	scanf("%u", &number); // storing the variable

	unsigned int digit = 1; // initializing the digit by 1, this variable will be used to loop through the number's digits
	unsigned int divisor = 1; // initializing the divisor by 1, this variable will be used to seperate the number's digits
	unsigned int single_digit = 0; // initializing the single digit by 0, this variable will be used to examine if it is 9 or not

	while(digit <= 5) { // while loop begins the processing of the number's digits
		if(digit == 1) { // the right-most digit
			divisor = 1; // (counter / 1) % 10
		} // end if
		else if(digit == 2) { // the second digit
			divisor = 10; // (counter / 10) % 10
		} // end else if
		else if(digit == 3) { // the third digit
			divisor = 100; // (counter / 1000) % 10
		} // end else if
		else if(digit == 4) { // the forth digit
			divisor = 1000; // (counter / 10000) % 10
		} // end else if
		else { // the fifth digit
			divisor = 10000; // (counter / 10000) % 10
		} // end else

		single_digit = (number / divisor) % 10; // seperate the digit

		if(single_digit == 9) { // if the digit is 9
			nines++; // increment the 9s counter by 1
		} // end if

		digit++; // increment the digit by 1
	} // end while

	nines ? printf("There are %u nine(s) in the first 5 digits!\n", nines) : puts("There are no nines in the first 5 digits!"); // printing the result by using ternary operator
} // end function main
