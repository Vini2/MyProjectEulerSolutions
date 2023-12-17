sum = 0
a=1
b=1
c=0

while b<4000000:    #Check whether the term in the sequence is less than 4000000
    if b%2==0:      #Check whether the term is divisible by 2
        sum+=b
    
    c=a+b
    a=b
    b=c

print "Sum of the even-valued terms: ", sum
