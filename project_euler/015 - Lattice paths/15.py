def fact(n):
    a = 1
    for i in range(1, n + 1):
        a *= i
    return a

print("40! =", fact(40))
print("20! =", fact(20))
num = fact(40) / fact(20) / fact(20)

print("40!/20!/20! =", int(num))
