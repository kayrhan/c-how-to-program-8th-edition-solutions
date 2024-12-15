// Exercises: 2.23
// Page 98

#include <stdio.h>

int main(void) { // function main begins program execution
	int x, y, z; // variable declarations

	puts("Please enter three integers and the program is going to determine the largest and the smallest numbers in the group."); // prompting the user for entering three integers
	scanf("%d%d%d", &x, &y, &z); // storing the values

	int a = x; // the largest number is initialized by x's value
	int b = x; // the smallest number is initialized by x's value

	if(y > a) { // if statement examines whether y is larger than x
		a = y; // if so, update the largest number with value of y
	}

	if(z > a) { // if statement examines whether z is the largest number
		a = z; // if so, update the largest number with the value of z
	}

	printf("The largest number is %d\n", a); // printing the largest number

	if(y < b) { // if statement examines whether y is smaller than x
		b = y; // if so, update the smallest number with value of y
	}

	if(z < b) { // if statement examines whether z is the smallest number
		b = z; // if so, update the smallest number with value of z
	}

	printf("The smallest number is %d\n", b); // printing the smallest number
} // end function main
