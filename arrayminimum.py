arr = list(map(int,input("Enter your number: ").split()))
mine = arr[0]
for i in range(len(arr)):
    if arr[i] < mine:
        #arr[i] le raha hun kyu ki range(len(arr))  liya hai hamne
        #agar directly arr me se hi iterate karte to arr[i] nahi likhna padta
        mine = arr[i]
print("The minimum number in the array is: ", mine)
maxe = arr[0]
for i in arr:
    if i>maxe:
        maxe = i
print("The maximum number in the array is: ", maxe)

# more shorter and concise way to do the same thing
arr2 = list(map(int, input("Enter your numbers: ").split()))
print("The minimum number in the array is:", min(arr2))
print("The maximum number in the array is:", max(arr2))

# One line code for the same thing
print("max :",max(nums:= list(map(int,input("Enter your numbers:").split()))), "MIN:", min(nums))