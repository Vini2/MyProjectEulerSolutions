sum = 0
for i in range(1,1000):
    if i%3==0:      #Check whether i is divisible by 3
        sum+=i
    elif i%5==0:    #Check whether i is divisible by 5
        sum+=i

print "Sum of all the multiples of 3 or 5 below 1000:", sum
