// Exercises: 3.37
// Page 142

#include <stdio.h>

int main(void) { // function main begins program execution
	unsigned int counter = 1; // initializing the counter by 1, this will be the number to count to 500

	while(counter <= 500) { // while loop begins the processing
		printf("%s", "$"); // printing the dollar sign

		if(counter % 50 == 0) { // if the counter is a multiple of 50
			printf("%s", "\n"); // printing a line break
		} // end if
		else { // if the counter is not a multiple of 50
			printf("%s", " "); // printing a space
		} // end else

		counter++; // increment the counter by 1
	} // end while
} // end function main
