// Exercises: 2.17
// Page 97

#include <stdio.h>

int main(void) { // function main begins program execution
	int u; // initial velocity
	int a; // acceleration
	int t; // time has elapsed

	puts("Please enter object's initial velocity: "); // prompting the user for entering object's initial velocity
	scanf("%d", &u); // storing the value
	puts("Please enter object's acceleration: "); // prompting the user for entering object's acceleration
	scanf("%d", &a); // storing the value
	puts("Please enter the time has elapsed: "); // prompting the user for entering the time has elapsed
	scanf("%d", &t); // storing the value

	int v; // velocity
	int s; // traversed distance

	v = u + a * t; // calculating the velocity
	s = (u * t) + ((a * t * t) / 2); // calculating the traversed distance

	printf("Object's velocity is %d\n", v); // printing the velocity
	printf("Object's traversed distance is %d\n", s); // printing the traversed distance
} // end function main
