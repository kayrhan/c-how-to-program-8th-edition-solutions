// Exercises: 3.40
// Page 143

#include <stdio.h>

int main(void) { // function main begins program execution
	int x = 3; // initializing the variable that will cause the infinite loop

	while(true) { // while loop's body is always true
		printf("%d\n", x); // printing the x
		x *= 3; // multiply the current x with 3
	} // end while
} // end function main
