a = [10, 20, 30, 20, 10]
b = []

for i in a:
    if i not in b:
        b.append(i)

print("After removing duplicates =", b)