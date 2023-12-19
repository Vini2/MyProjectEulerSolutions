a = 2 ** 1000

s = str(a)

sum1 = 0

for i in range(len(s)):
    sum1 += int(s[i])

print(f"Sum of the digits of the number 2**1000: {sum1}")
