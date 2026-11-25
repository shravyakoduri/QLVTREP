import math

num = input("Enter a number: ")
total = 0

for i in num:
    total += math.factorial(int(i))

if total == int(num):
    print("Strong number")
else:
    print("Not a strong number")