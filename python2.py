#2. Problem Statement
#Write a program to check if a given year is a leap year.

def is_leap_year(year):
    # Bug: Fails to handle years divisible by 100 but not 400
    if year % 4 == 0:
        return True
    return False

year = int(input("Enter a year: "))
if is_leap_year(year):
    print("Leap Year")
else:
    print("Not a Leap Year")

#Correct test case:
#Input: 2020
#Output: "Leap Year" (expected).

#Refute test case:
#Input: 1900
#Output: "Leap Year" (unexpected, as 1900 is not a leap year).