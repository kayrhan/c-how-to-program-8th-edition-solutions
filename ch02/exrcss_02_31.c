// Exercises: 2.31
// Page 99
// This program finds first 11 natural numbers' square and cubes.

#include <stdio.h>

int main(void) { // function main begins program execution
	printf("%s", "number\tsquare\tcube\n"); // table headers
	printf("%d\t%d\t%d\n", 0, 0 * 0, 0 * 0 * 0); // 0
	printf("%d\t%d\t%d\n", 1, 1 * 1, 1 * 1 * 1); // 1
	printf("%d\t%d\t%d\n", 2, 2 * 2, 2 * 2 * 2); // 2
	printf("%d\t%d\t%d\n", 3, 3 * 3, 3 * 3 * 3); // 3
	printf("%d\t%d\t%d\n", 4, 4 * 4, 4 * 4 * 4); // 4
	printf("%d\t%d\t%d\n", 5, 5 * 5, 5 * 5 * 5); // 5
	printf("%d\t%d\t%d\n", 6, 6 * 6, 6 * 6 * 6); // 6
	printf("%d\t%d\t%d\n", 7, 7 * 7, 7 * 7 * 7); // 7
	printf("%d\t%d\t%d\n", 8, 8 * 8, 8 * 8 * 8); // 8
	printf("%d\t%d\t%d\n", 9, 9 * 9, 9 * 9 * 9); // 9
	printf("%d\t%d\t%d\n", 10, 10 * 10, 10 * 10 * 10); // 10
} // end function main
