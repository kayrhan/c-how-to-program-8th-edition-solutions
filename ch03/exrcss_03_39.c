// Exercises: 3.39
// Page 142-143

#include <stdio.h>

int main(void) { // function main begins program execution
	unsigned int counter = 1; // initializing the counter by 1, this variable will be used to control the outer while loop

	while(counter <= 8) { // while loop begins the processing
		unsigned int inner_counter = 1; // initializing the inner counter by 1, this variable will be used to control the inner while loop

		if(counter % 2 == 1) { // if line number is odd, start with a space
			printf("%s", " "); // printing a space
		} // end if

		while(inner_counter <= 8) { // while loop begins the drawing of a line
			printf("%s", "* "); // draw asterisks

			if(inner_counter == 8) { // when you draw the last asterisk, insert a line break
				puts(""); // inserting a line break
			} // end if

			inner_counter++; // increment the inner counter by 1
		} // end inner while

		counter++; // increment the counter by 1
	} // end outer while
} // end function main
