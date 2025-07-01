// Exercises: 3.18
// Page 138

#include <stdio.h>

int main(void) { // function main begins program execution
	float gross_sales = 0.00; // declaring the gross sales variable

	printf("%s", "Enter sales in dollars (-1 to end): "); // prompting the user to enter the gross sales (possibly the sentinel)
	scanf("%f", &gross_sales); // storing the value

	while(gross_sales >= 0) { // while loop begins processing the weekly salaries for each salesperson
		printf("Salary is: $%.2f\n", (gross_sales * 0.09) + 200.00); // calculating and printing the earning
		printf("%s", "Enter sales in dollars (-1 to end): "); // prompting the user to enter the gross sales (possibly the sentinel)
		scanf("%f", &gross_sales); // storing the value
	} // end while
} // end function main
