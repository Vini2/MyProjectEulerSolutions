def main():
    for i in range(9, 0, -1):
        for j in range(9, -1, -1):
            for k in range(9, -1, -1):
                a = (i*100001)+(j*10010)+(k*1100)

                for m in range(999, 101, -1):
                    if a%m==0:
                        d = a/m
                        if (d>=100 and d<=999):
                            print "Largest palindrome with 3 digit multipliers is: ", a
                            return True

main()
                        
