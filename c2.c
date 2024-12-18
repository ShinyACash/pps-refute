/*
Problem Statement
Write a program to find all prime factors of a given number. A prime factor of a number is a factor that is a prime number.
*/

#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void print_prime_factors(int num) {
    if (num <= 1) {
        printf("No prime factors for numbers <= 1\n");
        return;
    }

    printf("Prime factors of %d: ", num);
    for (int i = 2; i <= num; i++) {
        // Bug: Does not handle repeated factors correctly
        if (num % i == 0 && is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    print_prime_factors(num);
    return 0;
}

/*
Correct Test Case:
Input: 14
Output: "Prime factors of 14: 2 7" (expected).


Refute Test Case:
Input: 12
Output: "Prime factors of 12: 2 3" (unexpected, should also account for the fact that 2 appears twice).
*/
