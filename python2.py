#Problem Statement
#Write a program to calculate the greatest common divisor (GCD) of two numbers.

def gcd(a, b):
    while b != 0:
        a, b = b, a % b  # Continue until b becomes 0
    return a

num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))

result = gcd(num1, num2)
print(f"The GCD of {num1} and {num2} is: {result}")


"""
Correct Test Case:

Input: 56, 98
Output: 14

Refute Case:

Input: 0, 25
Output: 25 (if one number is 0, GCD is the other number).
"""