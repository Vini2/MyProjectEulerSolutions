sum1 = 0
sum2 = 0

for i in range(1,101):
    sum1+=i		#Calculate the sum of numbers
    sum2+=(i*i)		#Calculate the sum of the squares of the numbers

sum1 = sum1*sum1	#Calculate the square of the sum of the numbers

dif = sum1 - sum2	#Calculate the difference

print "The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum : ", dif
