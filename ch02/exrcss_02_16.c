// Exercises: 2.16
// Page 97

#include <stdio.h>

int main(void) { // function main begins program execution
    int x, y; // variable definitions

    puts("Please enter two integers: "); // prompting the user for entering the values.
    scanf("%d%d", &x, &y); // storing the values
    printf("Sum: %d\n", x + y); // sum
    printf("Product: %d\n", x * y); // product
    printf("Difference: %d\n", x - y); // difference
    printf("Quotient: %d\n", x / y); // quotient
    printf("Remainder: %d\n", x % y); // remainder
} // end function main
