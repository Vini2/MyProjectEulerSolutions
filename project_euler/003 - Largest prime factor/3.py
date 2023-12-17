max = 0
num_to_test = 600851475143
num = 600851475143
n = 3

while True:
    while num % n == 0:
        num /= n
        max = n
    if num == 1:
        break
    n += 2

print(f"The largest prime factor of the number {num_to_test}: {max}")
    
