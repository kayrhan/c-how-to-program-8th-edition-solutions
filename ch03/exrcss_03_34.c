// Exercises: 3.34
// Page 142

#include <stdio.h>

int main(void) { // function main begins program execution
	unsigned int line = 1, current_number = 1, line_counter = 1; // declaring the variables

	while(line <= 10) { // while loop begins processing lines
		line_counter = line; // assigning line to line counter. This will be used on how many numbers will be drawn on one line

		while(line_counter > 0) { // while loop begins processing a single line
			printf("%u\t", current_number); // printing the current number
			line_counter--; // decrement the line counter by 1
			current_number++; // increment the current number by 1
		} // end while

		printf("%s", "\n"); // inserting a line break after a line has completed
		line++; // increment the line by 1
	} // end while
} // end function main
