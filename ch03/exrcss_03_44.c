// Exercises: 3.44
// Page 143

#include <stdio.h>

int main(void) { // function main begins program execution
	unsigned int x = 3, y = 4, z = 5; // initializing the variables
	int is_triangle = 0; // initializing the variable that will be used to determine if the given sides can represent a right triangle or not

	printf("%s", "Please enter the first leg of a right triangle: "); // prompting the user to enter the first leg
	scanf("%u", &x); // storing the variable
	printf("%s", "Please enter the second leg of a right triangle: "); // prompting the user to enter the second leg
	scanf("%u", &y); // storing the variable
	printf("%s", "Please enter the hypotenuse of a right triangle: "); // prompting the user to enter the hypotenuse
	scanf("%u", &z); // storing the variable

	if((x * x) + (y * y) == (z * z)) { // pythagorean theorem
		is_triangle = 1; // set the is_triangle variable to 1
	} // end if


	if(is_triangle == 0) { // if the is_triangle variable is 0
		puts("The given sides can not represent a right triangle!"); // printing that the sides can not represent a right triangle
	} // end if
	else { // if the is_triangle variable is not 0
		puts("The given sides can represent a right triangle."); // printing that the sides can represent a right triangle
	} // end else
} // end function main
