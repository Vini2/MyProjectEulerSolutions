
def preu():
    for i in range(1, 1000):
        for j in range(1, 1000):
            for k in range(1, 1000):
                a = i + j + k
                if a == 1000:
                    if((i * i) + (j * j) == (k * k)):
                        print(i * j * k)
                        return 0

preu()
