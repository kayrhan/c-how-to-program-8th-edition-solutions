// Exercises: 2.24
// Page 98

#include <stdio.h>

int main(void) { // function main begins program execution
	int x; // variable decleration for the number

	puts("Please enter an integer: "); // prompting the user for entering the number to determine that it is odd or even
	scanf("%d", &x); // storing the value

	if(x % 2 == 0) { // if statement examines the number whether it is even
		puts("The number is even"); // printing that the number is even
	}

	if(x % 2 != 0) { // if statement examines the number whether it is odd
		puts("The number is odd"); // printing that the number is odd
	}
} // end function main
