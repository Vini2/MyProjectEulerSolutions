import math

def is_prime(n):
    if n == 2:
        return True
    else:
        sqr = int(math.sqrt(n)) + 1
        for divisor in range(2, sqr):
            if n % divisor == 0:
                return False
    return True


prime = [2]
i = 3

for i in range(3, 2000000, 2):
    if is_prime(i):
        prime.append(i)

mysum = sum(prime)

print(f"The sum of all the primes below two million: {mysum}")
