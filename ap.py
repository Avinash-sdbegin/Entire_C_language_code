#A.P. Write a program to print all numbers  (n is input from user)

# n = int(input())
# for i in range(0,n,3):
#     print(i,end=" ")

# print(" ")
print(*range(3, int(input()), 4))
# range(start, stop, step) function numbers ka ek sequence banata hai:

# Example bina *:
# print(range(1, 10, 2))
# Yaha pura range object print ho gaya, numbers nahi.

#* ne range ke andar ke elements ko unpack karke print ke alag-alag arguments bana diya:

nums = [1, 2, 3, 4]
print(nums)      # prints list itself
print(*nums)     # prints elements separately
