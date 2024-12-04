#1. Problem Statement
#Write a program to check if a given number is even or odd.

def is_even(number):
    return number % 2 == 0 # Bug: 0 outputs even too even though its neither even nor odd.

number = int(input("Enter a number: "))
if is_even(number):
    print("Even")
else:
    print("Odd")
    
#Correct test case:
#Input: 4
#Output: Even (expected).

#Refute test case:
#Input: 0
#Output: Odd (unexpected).
