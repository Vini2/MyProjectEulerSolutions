
amicable = set()

for i in range(1,10000):

    if i not in amicable:

        sum1 = 0
        sum2 = 0
        
        print i

        a = 1
        while a<i:
            if i%a==0:
                sum1+=a
            a+=1

        a = 1
        while a<sum1:
            if sum1%a==0:
                sum2+=a
            a+=1

        if sum2==i and sum1!=sum2:
            print "Amicable pairs :", sum1, sum2
            amicable.add(sum1)
            amicable.add(sum2)

print "Sum of all amicable numbers under 100 =", sum(amicable)
    
