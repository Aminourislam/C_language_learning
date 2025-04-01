#include <stdio.h>

int main() {
    int number, isPrime = 1;

    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is prime
    if (number <= 1) {
        isPrime = 0; // Not prime
    } else {
        for (int i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                isPrime = 0; // Not prime
                break;
            }
        }
    }

    // Output the result
    if (isPrime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
