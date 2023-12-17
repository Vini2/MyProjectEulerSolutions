max = 0
num = 600851475143L
n=3L

while True:
    while num%n==0:
        num /= n
        max = n
    if num==1:
        break
    n+=2L

print "The largest prime factor of the number 600851475143: ", max
    
