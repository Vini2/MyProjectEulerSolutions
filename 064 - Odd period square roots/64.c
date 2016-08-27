#include<stdio.h>
#include<math.h>

int n;
int upperbound = 10000;
int result = 0;

main(){

    for (n = 2; n <= upperbound; n++){

        int limit = (int) sqrt(n);

        if (limit*limit == n)
            continue;

        int period = 0;
        int m = 0;
        int d = 1;
        int a = limit;

        while(a != 2*limit){        //Count the period
            m = (d*a)-m;
            d = (n-(m*m))/d;
            a = (limit+m)/d;
            ++period;
        }

        if (period%2 != 0)          //Check whether the period is odd
            result++;

    }

    printf("No. of continued fractions for N <= 10000 which have an odd period = %d\n", result);
}


