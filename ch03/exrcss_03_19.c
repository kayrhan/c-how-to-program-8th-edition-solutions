// Exercises 3.19
// Page 138

#include <stdio.h>

int main(void) { // function main begins program execution
	float loan_principal = 0, annual_interest = 0.1, loan_term = 365; // declaring the variables

	printf("%s", "Enter loan principal (-1 to end): "); // prompting the user to enter the loan principle
	scanf("%f", &loan_principal); // storing the value

	while(loan_principal >= 0) { // while loop begins proccessing of the simple interest
		printf("%s", "Enter interest rate: "); // prompting the user to enter the annual interest rate
		scanf("%f", &annual_interest); // storing the value
		printf("%s", "Enter term of the loan in days: "); // prompting the user to enter the loan's term
		scanf("%f", &loan_term); // storing the value

		if(loan_principal > 0) { // if there is a loan
			printf("The interest charge is $%.2f\n", loan_principal * annual_interest * (loan_term / 365)); // calculating and printing the interest charge
		} // end if
		else { // if there is no loan
			printf("%s", "There is no debt!\n"); // printing that there is no debt
		} // end else

		printf("%s", "Enter loan principal (-1 to end): "); // prompting the user to enter the loan principle
		scanf("%f", &loan_principal); // storing the value
	} // end while
} // end function main
