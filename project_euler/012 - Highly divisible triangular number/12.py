import math

def isPrime(m):
    if m<3:
        return True
    else:
        for i in range(2,int(math.sqrt(m))+1):
            if m%i==0:
                return False

        return True

def main():
    n=12368
    while True:
        tn = n*(n+1)/2
        fact = 0
        print tn
        if not(isPrime(tn)):
            for j in range(1,tn+1):
                if tn%j==0:
                    fact+=1

            if fact>500:
                print "Numbers is", tn
                return 0
            
        n+=1


main()
