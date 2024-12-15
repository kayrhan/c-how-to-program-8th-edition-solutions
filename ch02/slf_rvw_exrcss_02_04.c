// Self-Review Exercises: 2.4
// Page 94
// This program will calculate the product of three integers. (a)

#include <stdio.h>

int main(void) { // function main begins program execution
	puts("Please enter three integers: "); // b
	int x, y, z; // c
	scanf("%d%d%d", &x, &y, &z); // d

	int result; // e.01
	result = x * y * z; // e.02

	printf("The product is %d\n", result); // f
} // end function main
