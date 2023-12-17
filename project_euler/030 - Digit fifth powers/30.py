
n = 10
tot = 0
while True:
    s = str(n)
    sum1=0
    for i in range(len(s)):
        sum1+=int(s[i])**5

    if sum1 == n:
        tot+=sum1
        print tot
        
    n+=1
