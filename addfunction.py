# This program defines several arithmetic functions and uses them to perform calculations on user-provided input.

def sum(a, b):
    return a + b
def multiply(a, b):
    return a * b
def subtract(a, b):
    return a - b
def divide(a, b):
    if b == 0:
        raise ValueError("Cannot divide by zero")
    return a / b
def modulus(a, b):
    return a % b
def power(a, b):
    return a ** b

x = int(input("Enter first number: "))
y = int(input("Enter second number: "))
print("Sum:", sum(x, y))
print("Difference:", subtract(x, y))
print("Product:", multiply(x, y))
print("Quotient:", divide(x, y))
print("Modulus:", modulus(x, y))
print("Power:", power(x, y))