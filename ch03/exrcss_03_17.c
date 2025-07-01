// Exercises: 3.17
// Page 137-138

#include <stdio.h>

int main(void) { // function main begins program execution
	int account_no = 0; // declaring the account number, may store sentinel value which is -1, this is why we choose the data type as int
	unsigned int mortg_term = 0; // declaring the mortgage term in years
	float mortg_amount = 0, interest = 0.075, total_interest_payable = 0, total_amount_payable = 0; // declaring the float variables

	printf("%s", "Enter account number (-1 to end): "); // prompting the user for entering the account number (possibly the sentinel)
	scanf("%d", &account_no); // storing the value

	while(account_no > 0) { // while loop begins processing the accounts until it counters with the sentinel value
		printf("%s", "Enter mortgage amount (in dollars): "); // prompting the user for entering the mortgage amount
		scanf("%f", &mortg_amount); // storing the value
		printf("%s", "Enter mortgage term (in years): "); // prompting the user for entering the mortgage term
		scanf("%u", &mortg_term); // storing the value
		printf("%s", "Enter interest rate (as a decimal): "); // prompting the user for entering the interest rate
		scanf("%f", &interest); // storing the value

		if(mortg_amount > 0) { // if the mortgage amount is positive
			total_interest_payable =  mortg_amount * interest * mortg_term; // calculate the total interest
			total_amount_payable = mortg_amount + total_interest_payable; // calculate the total debt
			printf("The monthly payable interest is $ %.0f\n", total_amount_payable / (mortg_term * 12)); // calculate and print the monthly debt
		} // end if
		else { // if there is no debt
			puts("There is no mortgage to pay!"); // printing that there is no debt
		} // end else

		printf("%s", "Enter account number (-1 to end): "); // prompting the user for entering the account number (possibly the sentinel)
		scanf("%d", &account_no); // storing the value
	} // end while
} // end function main
