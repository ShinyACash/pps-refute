/*
Corrected Code
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
        while (num % i == 0 && is_prime(i)) { // Repeatedly divide by the prime factor
            printf("%d ", i);
            num /= i;
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
