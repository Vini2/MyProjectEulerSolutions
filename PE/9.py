
def preu():
    for i in range(1,1000):
        for j in range(1,1000):
            for k in range(1,1000):
                a = i+j+k
                if(i*i+j*j==k*k and a==1000):
                    print i*j*k
                    return 0

preu()
