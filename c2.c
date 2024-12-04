/*
2. Problem Statement
Write a program to check if a given number is positive.
*/

#include <stdio.h>

const char* check_positive(int num) {
    if (num > 0) return "Positive";
    else return "Not Positive";
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%s\n", check_positive(num));
    return 0;
}

/*
Correct test case:
Input: 5
Output: "Positive" (expected).

Refute test case:
Input: 0
Output: "Not Positive" (unexpected, zero is neither postitive nor negative.)
*/
