fo = open("names.txt", "rt")
str1 = fo.read()

str2 = str1.split(",")
str2.sort()

sum1 = 0

for i in range(len(str2)):
    count1=0
    for j in range(len(str2[i])):
        if not(str2[i][j]=='"'):
            count1+=(ord(str2[i][j])-64)
    sum1+=(count1*(i+1))

print sum1
            
