// Self-Review Exercises: 3.3
// Page 133

#include <stdio.h>

int main(void) { // function main begins program execution
	int product = 1; // the variable that is going to be used on calculations initiliazed by 1 for proper multiplications
	printf("The variable has initialized with the value of %d\n", product); // initialization text

	product *= 2; // a
	printf("%d\n", product); // verify the calculation

	product = product * 2; // b
	printf("%d\n", product); // verify the calculation

	int count = 10; // the variable that is going be used on c initailized by 10
	if(count > 10) { // if statement begins c
		puts("Count is greater than 10."); // c
	} // end c

	int q = 80, divisor = 7; // the variables that is going to be used on d initalized by 80 and 7 respectively
	q = q % divisor; // first way to do the d
	printf("q is %d\n", q); // print q
	q = 80; // assign initialization value to q to see same result
	q %= divisor; // second way to do the d
	printf("q is %d\n", q); // print q

	printf("The value is %.2f\n", 123.4567); // e

	printf("The value is %.3f\n", 3.14159); // f
} // end function main
