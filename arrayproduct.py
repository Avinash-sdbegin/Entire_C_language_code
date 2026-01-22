# arr = list(map(int,input("Enter numbers separated by space: ").split()))
# product = 1
# for i in arr:
#     product *= i
# print("The product of all the elements in the array is: ", product)

#-------Using math.prod() function
# import math
# arr = list(map(int,input("Enter array elements separated by space: ").split()))
# product = math.prod(arr)
# print("The product of all the elements in the array is: ", product)

#-------One line code for the same thing
import math
# math.prod() function returns the product of all the elements in the iterable (like list, tuple, etc.)
print(math.prod(list(map(int,input("Enter array elements separated by space: ").split()))))

# 