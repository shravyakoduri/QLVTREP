num = input("Enter a number: ")

total = sum(int(i)**3 for i in num)

if total == int(num):
    print("Armstrong number")
else:
    print("Not an Armstrong number")