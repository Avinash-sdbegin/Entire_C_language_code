import math
x = int(input("Enter the number:  "))
print("The absolute value of the number is : ", end="") 
# here end="" is used to avoid the new line after the print statement
print(math.fabs(x))# Prints the absolute value as a float
# .fabs() function is used to find the absolute value of a number as a float
print("The absolute value of the number is :", abs(x))
# .abs() function is used to find the absolute value of a number as an integer


# Another way to find the absolute value of a number
# one line code of it.
print(abs(int(input("Enter the number: "))))

