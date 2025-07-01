// Exercises: 3.43
// Page 143

#include <stdio.h>

int main(void) { // function main begins program execution
	unsigned int x = 1, y = 2, z = 3; // initializing the variables
	int is_triangle = 1; // initializing the variable that will be used to determine if the given sides can represent a triangle or not

	printf("%s", "Please enter the first side of a triangle: "); // prompting the user to enter the first side
	scanf("%u", &x); // storing the variable
	printf("%s", "Please enter the second side of a triangle: "); // prompting the user to enter the second side
	scanf("%u", &y); // storing the variable
	printf("%s", "Please enter the third side of a triangle: "); // prompting the user to enter the third side
	scanf("%u", &z); // storing the variable

	if((x + y) <= z) { // triangle inequality theorem
		is_triangle = 0; // set the is_triangle variable to 0
	} // end if

	if((x + z) <= y) { // triangle inequality theorem
		is_triangle = 0; // set the is_triangle variable to 0
	} // end if

	if((y + z) <= x) { // triangle inequality theorem
		is_triangle = 0; // set the is_triangle variable to 0
	} // end if

	if(is_triangle == 0) { // if the is_triangle variable is 0
		puts("The given sides can not represent a triangle!"); // printing that the sides can not represent a triangle
	} // end if
	else { // if the is_triangle variable is not 0
		puts("The given sides can represent a triangle."); // printing that the sides can represent a triangle
	} // end else
} // end function main
