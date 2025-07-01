// Exercises: 3.22
// Page 139

#include <stdio.h>

int main(void) { // function main begins program execution
	int x; // The variable that will be determined whether it is a prime number or not
	unsigned int divisors = 0; // We will increment this variable if we will determine any divisors

	printf("%s", "Please enter a number: "); // prompting the user to enter a number
	scanf("%d", &x); // storing the value

	int counter = x - 1; // The variable that will be decrementred has initialized with the value of x minus 1

	if(x > 1) { // Only a natural number greater than 1 can be a prime number
		while(counter > 1) { // loop x-2 times (x and 1 is excluded)
			if(x % (counter) == 0) { // if x is divisible by counter
				divisors++; // increment the value of divisors by 1, so we can understand that there was a divisor
			}

			counter--; // decrement the counter
		} // end while

		if(divisors > 0) { // if there is any divisors
			puts("This number is not a prime number!"); // printing that this number is not a prime number
		} // end if
		else { // if there is no divisor
			puts("This number is a prime number!"); // printing that this number is a prime number
		} // end else
	} // end if
	else { // If a number is smaller than or equals to 1, then it is not a prime number
		puts("This number is not a prime number!"); // printing that this number is not a prime number
	} // end else
} // end function main
