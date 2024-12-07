# Corrected Code

def gcd(a, b):
    if a == 0 and b == 0:
        raise ValueError("GCD is undefined for both numbers being 0")
    
    while b != 0:
        a, b = b, a % b  # Continue until b becomes 0
    return a

try:
    num1 = int(input("Enter the first number: "))
    num2 = int(input("Enter the second number: "))
    
    if num1 < 0 or num2 < 0:
        print("Please enter non-negative numbers.")
    else:
        result = gcd(num1, num2)
        print(f"The GCD of {num1} and {num2} is: {result}")
        
except ValueError as e:
    print(f"Error: {e}")
