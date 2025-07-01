// Self-Review Exercises: 3.6
// Page 133

#include <stdio.h>

int main(void) { // function main begins program execution
	unsigned int x, y; // a.01 && b.01

	puts("Please enter a value for x:"); // a.02
	scanf("%u", &x); // a.03

	puts("Please enter a value for y:"); // b.02
	scanf("%u", &y); // b.03

	unsigned int i = 1, power = 1; // c & d
	power *= x; // e
	i++; // f

	while(i <= y) { // while loop begins g
		puts("i is less than or equal to y."); // g
	} // end g

	printf("%u", power); // h
} // end function main
