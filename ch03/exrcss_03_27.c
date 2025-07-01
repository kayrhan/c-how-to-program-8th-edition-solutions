// Exercises: 3.27
// Page 140

#include <stdio.h>

int main(void) { // function main begins program execution
	unsigned int passes = 0, failures = 0, student = 1, result; // declaring the variables

	while(student <= 10) { // while loop begins processing the ten students
		printf("%s", "Enter a result (1=Pass, 2=Fail): "); // prompting the user to enter a result
		scanf("%u", &result); // storing the variable

		if(result == 1) { // if student is successful
			++passes; // increment the passes by 1
		} // end if
		else { // if the result is other than 1, we are going to validate the input
			while(result != 1) { // while loop begins processing the result
				if(result == 2) { // if student is failed
					++failures; // increment the failures by 1
					result = 1; // setting the result to 1 for escaping the inner while loop
				} // end if
				else { // if input is invalid
					printf("%s", "Invalid input! Enter a valid result (1=Pass, 2=Fail): "); // prompting the user to enter a result again
					scanf("%u", &result); // storing the variable

					if(result == 1) { // we should process the passed student after invalid input
						++passes; // increment the passes by 1
					} // end if
				} // end else
			} // end while
		} // end else

		++student; // increment the proccessed students by 1
	} // end while

	printf("Passes %u\n", passes); // printing the passes
	printf("Failed %u\n", failures); // printing the failures

	if(passes > 8) { // if the passed students is more than 8
		puts("Bonus to instructor!"); // printing that instructor has earned a bonus
	} // end if
} // end function main
