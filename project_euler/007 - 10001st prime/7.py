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


count1 = 1
i = 3

while True:
    
    if is_prime(i):
        count1 = count1 + 1

    if (count1 == 10001):
        print(f"10001st prime number: {i}")
        break
    
    i=i+2