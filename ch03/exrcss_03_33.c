// Exercises: 3.33
// Page 142

#include <stdio.h>

int main(void) { // function main begins program execution
	unsigned int side = 2, line_counter = 2, initial_side = 2; // declaring the variables

	printf("%s", "Please enter the side of a square: "); // prompting the user to enter the side of a square
	scanf("%u", &side); // storing the variable

	while(side >= 20) { // if side is greater than or equal to 20
		printf("%s", "Please enter a side between 1 and 20: "); // prompting the user to enter the side again
		scanf("%u", &side); // storing the variable
	} // end outer while

	while(side <= 1) { // if side is less than or equal to 1
		printf("%s", "Please enter a side between 1 and 20: "); // prompting the user to enter the side again
		scanf("%u", &side); // storing the variable

		while(side >= 20) { // if side is greater than or equal to 20, we are putting this control because otherwise, without the inner while, in such case, user can enter 1 and after reprompt, can input 20+ values without any restrictions.
			printf("%s", "Please enter a side between 1 and 20: "); // prompting the user to enter the side again
			scanf("%u", &side); // storing the variable
		} // end inner while
	} // end outer while

	line_counter = side; // assign line counter to side that received from user input, this will be used in the inner while to draw asterisks in line
	initial_side = side; // assign initial side to side that received from user input, this will be used to restart line counter for every the outer while's iteration

	while(side > 0) { // while loop begins drawing the asterisks
		if(side == initial_side) { // if it is the first line
			while(line_counter > 0) { // while loop begins drawing the first line's asterisks
				printf("%s", "*"); // draw asterisks
				--line_counter; // decrement the line counter by 1
			} // end inner while
		} // end if
		else if(side == 1) { // if it is the last line
			while(line_counter > 0) { // while loop begins drawing the last line's asterisks
				printf("%s", "*"); // draw asterisks
				--line_counter; // decrement the line counter by 1
			} // end inner while
		} // end else if
		else { // if it is one of the middle line
			while(line_counter > 0) { // while loop begins drawing the middle line's asterisks
				if(line_counter == initial_side) { // if it is the first column
					printf("%s", "*"); // draw asterisks
				} // end if
				else if(line_counter == 1) { // if it is the last column
					printf("%s", "*"); // draw asterisks
				} // end else if
				else { // if it is one of the middle column
					printf("%s", " "); // draw a space
				} // end else

				--line_counter; // decrement the line counter by 1
			} // end inner while
		} // end else

		printf("%s", "\n"); // draw a line break after a line
		line_counter = initial_side; // restart line counter to initial side
		--side; // decrement the side by 1
	} // end outer while
} // end function main
