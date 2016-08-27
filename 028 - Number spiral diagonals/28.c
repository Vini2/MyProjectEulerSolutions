#include <stdio.h>

int i, sum=0;

main(){

    for(i=2; i<=501; i++){

        //upper right corner = |2n+1|^2
        //upper left corner = |2n+1|^2 - 2n
        //lower left corner = |2n+1|^2 - 4n
        //lower right corner = |2n+1|^2 - 6n

        //sum of corners = 4|2n+1|^2 - 12n

        int corners = (4*((2*(i-1))+1)*((2*(i-1))+1))-(12*(i-1));
        sum+=corners;

    }

    printf("Sum of the numbers on the diagonals in a 1001 by 1001 spiral formed = %d\n", sum+1);
}

