/*
Corrected code
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrome(char str[]) {
    int len = strlen(str);

    // Check if the string is empty
    if (len == 0) {
        return false;
    }

    // Check if the string is a palindrome
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
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