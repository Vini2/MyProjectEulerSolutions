

def findfactors(num):
    global primefactorlist
    primefactorlist=[]
    for i in xrange(1,num+1):
        if num%i==0:
            j=2
            if j<1:
                if i%j!=0:
                    j+=1

            else:
                primefactorlist.append(num)

findfactors(600851475143)

print primefactorlist[-1]
