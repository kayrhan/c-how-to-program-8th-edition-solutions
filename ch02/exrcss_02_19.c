// Exercises: 2.19
// Page 97

#include <stdio.h>

int main(void) { // function main begins program execution
	int x, y, z; // variable declarations

	printf("%s","Please enter three different integers: "); // prompting the user for entering three different integers
	scanf("%d%d%d", &x, &y, &z); // storing the values

	printf("\nSum is %d\n", x + y + z); // printing the sum
	printf("Average is %d\n", (x + y + z) / 3); // printing the average
	printf("Product is %d\n", x * y * z); // printing the product

	int a = x; // the smallest number is initialized by x's value
	int b = x; // the largest number is initialized by x's value

	if(a > y) { // if statement examines whether y is smaller than x
		a = y; // if so, update the smallest number with value of y
	}

	if(a > z) { // if statement examines whether z is the smallest number
		a = z; // if so, update the smallest number with value of z
	}

	printf("Smallest is %d\n", a); // printing the smallest number

	if(b < y) { // if statement examines whether y is larger than x
		b = y; // if so, update the largest number with value of y
	}

	if(b < z) { // if statement examines whether z is the largest number
		b = z; // if so, update the largest number with the value of z
	}

	printf("The largest is %d\n", b); // printing the largest number
} // end function main
