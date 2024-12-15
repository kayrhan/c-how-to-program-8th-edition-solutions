// Exercises: 2.30
// Page 99

#include <stdio.h>

int main(void) { // function main begins program execution
	int x; // 5 digit number

	puts("Please enter a five-digit number: "); // prompting the user for the number
	scanf("%d", &x); // storing the value
	printf("%d   %d   %d   %d   %d\n", x / 10000 % 10, x / 1000 % 10, x / 100 % 10, x / 10 % 10, x % 10); // printing the number's each digit seperately
} // end function main
