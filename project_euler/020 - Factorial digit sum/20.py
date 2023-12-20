a = 1

for i in range(1, 101):
    a *= i

s = str(a)

sum1 = 0

for i in range(len(s)):
    sum1 += int(s[i])

print(sum1)
