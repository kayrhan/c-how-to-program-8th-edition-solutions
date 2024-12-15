// Exercises: 2.32
// Page 99

#include <stdio.h>

int main(void) { // function main begins program execution
	int weight, height; // variable declarations

	puts("Please enter your weight in kilograms:"); // prompting the user for a weight
	scanf("%d", &weight); // storing the value

	puts("Please enter your height in centimeters"); // prompting the user for a height
	scanf("%d", &height); // storing the value

	// default informative text about BMI (Body-Mass Index) values
	puts("\nBMI VALUES");
	puts("Underweight:\tless than 18.5");
	puts("Normal:\t\tbetween 18.5 and 24.9");
	puts("Overweight:\tbetween 25 and 29.9");
	puts("Obese:\t\t30 or greater");

	int result = weight / ((height / 100) * (height / 100)); // calculating the BMI
	printf("Your BMI:\t%d\n", result); // printing the result
} // end function main
