// Exercises: 3.26
// Page 140

#include <stdio.h>

int main(void) { // function main begins program execution
	unsigned int counter = 0, current = 0, largest = 0, larger = 0; // declaring the variables

	while(counter < 10) { // while loop begins processing of the numbers
		printf("%s", "Please enter a number: "); // prompting the user to enter a number
		scanf("%u", &current); // storing the value

		if(current > largest) { // if the current number is greater than the largest number
			larger = largest; // assigning the largest number to the second largest number before updating it
			largest = current; // assigning the current number to the largest number
		} // end if
		else if(largest > current) { // if the current number is smaller than the largest number
			if(current > larger) { // and if the current number is greater than the second largest number
				larger = current; //  assigning the current number to the second largest number
			} // end if
		} // end else if

		counter++; // increment the counter by 1
	} // end while

	printf("The largest number is %u\n", largest); // printing the largest number
	printf("The second largest number is %u\n", larger); // printing the second largest number
} // end function main
