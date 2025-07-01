// Exercises: 3.20
// Page 139

#include <stdio.h>

int main(void) { // function main begins program execution
	int hours_worked = 40; // declaring the hours worked by employee (possibly the sentinel which is -1)
	float hourly_rate = 10.00; // declaring the hourly rate of employee

	printf("%s", "Enter # of hours worked (-1 to end): "); // prompting the user to enter the hours worked
	scanf("%d", &hours_worked); // storing the value

	while(hours_worked >= 0) { // while loop begins processing the employee's salary
		printf("%s", "Enter hourly rate of the worker ($00.00): "); // prompting the user to enter the hourly rate of the employee
		scanf("%f", &hourly_rate); // storing the value

		if(hours_worked > 40) { // if the employee exceeds 40 hours
			printf("Salary is $%.2f\n", (40 * hourly_rate) + (1.5 * hourly_rate * (hours_worked - 40))); // calculating and printing the salary
		} // end if
		else { // if the employee NOT exceeds 40 hours
			printf("Salary is $%.2f\n", hours_worked * hourly_rate); // calculating and printing the salary
		} // end else

		printf("%s", "Enter # of hours worked (-1 to end): "); // prompting the user to enter the hours worked
		scanf("%d", &hours_worked); // storing the value
	} // end while
} // end function main
