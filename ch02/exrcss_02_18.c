// Exercises: 2.18
// Page 97

#include <stdio.h>

int main(void) { // function main begins program execution
	int x; // the highest rainfall ever for a country in one season
	int c; // rainfall in the current season

	puts("Please enter the highest rainfall ever for a country in one season: "); // prompting the user for entering the highest rainfall ever for a country in one season
	scanf("%d", &x); // storing the value

	puts("Please enter current season's rainfall in the country: "); // prompting the user for entering the rainfall in the current season
	scanf("%d", &c); // storing the value

	if(c == x) { // if statement examines whether the record has been equalized
		puts("The highest rainfall in a one season record has been equalized!"); // printing the result
	}

	if(c > x) { // if statement examines whether the record has been broken
		x = c; // updating the record
		printf("The highest rainfall in a one season record has been updated as %d!\n", c); // printing the result
	}

	if(c < x) { // if statement examines whether the record has not been broken
		puts("The highest rainfall in a one season record has not been broken."); // printing the result
	}
} // end function main
