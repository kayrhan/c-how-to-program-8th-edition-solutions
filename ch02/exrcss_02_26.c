// Exercises: 2.26
// Page 98

#include <stdio.h>

int main(void) { // function main begins program execution
	int x, y; // variable declarations

	puts("Please enter two integers and the program is going to decide whether the first integer is a multiple of second or not: "); // prompting the user for the integers
	scanf("%d %d", &x, &y); // storing the values

	if(x % y == 0) { // if statement examines that first integer is multiple of second integer
		puts("First integer is multiple of second integer."); // printing the result
	}

	if(x % y != 0) { // if statement examines that first integer is not multiple of second integer
		puts("First integer is not multiple of second integer."); // printing the result
	}
} // end function main
