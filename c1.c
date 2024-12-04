/*
1. Problem Statement
Write a program to check if a given string is a palindrome.
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true; // Bug: Should return false if empty string
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (is_palindrome(str))
        printf("Palindrome\n");
    else
        printf("Not a Palindrome\n");
    return 0;
}

/*
Correct test case:
Input: "radar"
Output: "Palindrome" (expected).

Refute test case:
Input: "" (empty string)
Output: "Palindrome" (unexpected).
*/