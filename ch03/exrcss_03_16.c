// Exercises: 3.16
// Page 137

#include <stdio.h>

int main(void) { // function main begins program execution
	int total_collections = 0; // initialize the total collections for a month with the value of 0
	float sales = 0, unit_price = 1, county_tax = 0, state_tax = 0, total_tax = 0; // initialize other float variables with proper values

	puts("Enter total amount collected (-1 to quit): "); // prompting the user for the value of the total collections
	scanf("%d", &total_collections); // storing the value

	while(total_collections != -1) { // while loop begins processing the total collections
		if(total_collections > 0) { // if there is any collection for a month
			sales = total_collections *  unit_price; // calculate the total income
			county_tax = (sales * (0.05)); // calculate the county tax which is %5
			state_tax = (sales * (0.04)); // calculate the state tax which is %4
			total_tax = county_tax + state_tax; // calculate the total tax
			printf("\nTotal Collections: $ %.2f\n", sales); // printing the total income
			printf("County Sales Tax: $ %.2f\n", county_tax); // printing the county tax
			printf("State Sales Tax: $ %.2f\n", state_tax); // printing the state tax
			printf("Total Sales Tax Collected: $ %.2f\n", total_tax); // printing the total tax
			printf("Net Sales After Taxes: $ %.2f\n", sales - total_tax); // printing the net income
		}
		else { // if there is no collection for a month
			puts("There is no collection this month!"); // printing the proper message
		}

		puts("Enter total amount collected (-1 to quit):"); // prompting the user for the value of the total collections
		scanf("%d", &total_collections); // storing the value
	} // end while
} // end function main
