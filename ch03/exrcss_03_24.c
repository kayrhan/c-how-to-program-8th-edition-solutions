// Exercises: 3.24
// Page 139

#include <stdio.h>

int main(void) { // function main begins program execution
	unsigned int counter = 1; // declaring the counter for counting up to 10

	printf("%s", "N\tN²\tN³\tN⁴\n\n"); // printing the header line

	while(counter <= 10) { // while begins processing the numbers
		printf("%u\t%u\t%u\t%u\n", (counter), (counter * counter), (counter * counter * counter), (counter * counter * counter * counter)); // printing the calculations
		counter++; // incrementing the counter by 1
	} // end while
} // end function main
