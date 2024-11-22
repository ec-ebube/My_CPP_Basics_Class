// ONWE EMMANUEL ONWE
// 20221313782

#include <stdio.h>

// Function to square a number
int square(int num) {
    return num * num;
}

// Function to demonstrate the use of square
void core() {
    int num1 = 4;
    int num2 = 5;

    int squared1 = square(num1);
    int squared2 = square(num2);

    printf("The square of %d is %d\n", num1, squared1);
    printf("The square of %d is %d\n", num2, squared2);
}

int main() {
    // Call the core function
    core();

    return 0;
}
