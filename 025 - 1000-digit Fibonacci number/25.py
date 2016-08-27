ans = 0
num = 0
n=1
a=1
b=1
c=0

while True:
    n+=1
    s = str(b)
    if len(s)==1000:
        ans = n
        num = b
        break
    
    c=a+b
    a=b
    b=c

print "First term in the Fibonacci sequence to contain 1000 digits :", ans
print "Number :", num
