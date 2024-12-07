#Problem Statement
#Write a program to check if two given strings are anagrams or not.

def are_anagrams(str1, str2):
    # Bug: Does not handle case sensitivity or spaces
    return sorted(str1) == sorted(str2)

str1 = input("Enter first string: ")
str2 = input("Enter second string: ")
if are_anagrams(str1, str2):
    print("Anagram")
else:
    print("Not an Anagram")

    
"""Correct test case:
Input: "listen", "silent"
Output: "Anagram" (expected).

Refute test case:
Input: "Listen", "silent"
Output: "Anagram" (unexpected, should be case-insensitive)."""
