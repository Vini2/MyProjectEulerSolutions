sum1=0

for i in range(2,502):

    #upper right corner = |2n+1|^2
    #upper left corner = |2n+1|^2 - 2n
    #lower left corner = |2n+1|^2 - 4n
    #lower right corner = |2n+1|^2 - 6n

    #sum of corners = 4|2n+1|^2 - 12n

    corners = (4*((2*(i-1))+1)*((2*(i-1))+1))-(12*(i-1))
    sum1+=corners

print "Sum of the numbers on the diagonals in a 1001 by 1001 spiral formed =", sum1+1


