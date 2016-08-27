


def convertBin(n):

    num = n
    ans = ""
    while num>0:
        qut = num/2
        rem = num%2
        ans = str(rem)+ans
        num=qut
    return ans

def isPal(num_s):

    for i in range(len(num_s)/2):
        if num_s[i]!=num_s[len(num_s)-1-i]:
            return False
    return True


sum1=0

for i in range(1000000):

    bin1 = convertBin(i)

    if isPal(str(i)) and isPal(bin1):
        sum1+=i
        print i,sum1

print "Answer :", sum1

    
