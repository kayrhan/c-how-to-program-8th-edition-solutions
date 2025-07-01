// Exercises: 3.25
// Page 140
// PLEASE NOTE THAT THERE MAY BE A MISTAKE ON FOURTH COLUMN WHICH IS SHOWN AS (counter * 9) NOT (counter + 9)
// WE APPLIED (counter * 9) IN ACCORDANCE WITH THE TABLE IN THE TEXTBOOK

#include <stdio.h>

int main(void) { // function main begins program execution
	unsigned int counter = 7; // declaring the counter

	printf("%s", "A\tA+3\tA+6\tA+9\n\n"); // printing the header line

	while(counter <= 35) { // while begins processing the numbers
		printf("%u\t%u\t%u\t%u\n", (counter), (counter + 3), (counter + 6), (counter * 9)); // printing the calculations
		counter += 7; // incrementing the counter by 7
	} // end while
} // end function main
