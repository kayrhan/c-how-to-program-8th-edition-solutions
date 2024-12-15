// Exercises: 2.20
// Page 97

#include <stdio.h>

int main(void) { // function main begins program execution
	int t; // the time in seconds since an event has occured
	puts("Please enter the time in seconds since an event has occured:"); // prompting the user for entering the time in seconds
	scanf("%d", &t); // storing the value
	printf("%d:%d:%d", (t / 3600), ((t / 60) % 60), (t % 60)); // calculating and printing the result
} // end function main
