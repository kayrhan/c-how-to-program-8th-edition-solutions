// Self-Review Exercises: 3.2
// Page 133

#include <stdio.h>

int main(void) { // function main begins program execution
	int x = 0; // variable which will be incremented, initialized by 0, expecting final output 1,2,3,4

	x = x + 1; // first statement
	printf("%d\n", x); // verify that incrementation has done successfully

	x += 1; // second statement
	printf("%d\n", x); // verify that incrementation has done successfully

	x++; // third statement as post-incrementation, pre-incrementation would have the same effect
	printf("%d\n", x); // verify that incrementation has done successfully

	++x; // forth statement as pre-incrementation, post incrementation would have the same effect
	printf("%d\n", x); // verify that incrementation has done successfully
} // end function main
