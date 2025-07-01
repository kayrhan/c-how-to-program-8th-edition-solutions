// Exercises: 3.23
// Page 139

#include <stdio.h>

int main(void) { // function main begins program execution
	unsigned int counter = 0, current = 0, largest = 0; // declaring the variables

	while(counter < 10) { // while loop begins processing of the numbers
		printf("%s", "Please enter a number: "); // prompting the user to enter a number
		scanf("%u", &current); // storing the value

		if(current > largest) { // if the current number is greater than the largest number
			largest = current; // assigning the current number to the largest number
		} // end if

		counter++; // increment the counter by 1
	} // end while

	printf("The largest number is %u\n", largest); // printing the largest number
} // end function main
