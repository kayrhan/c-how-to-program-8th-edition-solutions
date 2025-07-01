// Exercises: 3.41
// Page 143

#include <stdio.h>

int main(void) { // function main begins program execution
	float radius = 1.00, pi = 3.14159; // initializing the variables
	printf("%s", "Please enter the radius of a circle: "); // prompting the user to enter the radius
	scanf("%f", &radius); // storing the variable
	printf("The diameter is %.3f\n", 2 * radius); // calculating and printing the diameter
	printf("The circumference is %.3f\n", 2 * pi * radius); // calculating and printing the circumference
	printf("The area is %.3f\n", pi * (radius * radius)); // calculating and printing the area
} // end function main
