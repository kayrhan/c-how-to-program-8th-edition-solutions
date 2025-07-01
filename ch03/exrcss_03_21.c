// Exercises: 3.21
// Page 139

#include <stdio.h>

int main(void) { // function main begins program execution
	int x = 5, y = 5; // declaring the variables which we will use to demonstrate the difference

	printf("Both x and y is %d and %d respectively at the beginning of the program.\n", x, y); // printing the initial situation
	printf("We are pre-incrementing the x. The value is now %d.\n", ++x); // pre-increment
	printf("We are post-incrementing the y. The value is still %d. It will be incremented in the next usage.\n", y++); // post-increment
	printf("Testing the post-incrementing. y is now %d.\n", y); // showing the post-increment
} // end function main
