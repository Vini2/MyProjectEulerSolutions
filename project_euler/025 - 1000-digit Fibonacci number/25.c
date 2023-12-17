#include <stdio.h>
#include <math.h>

main(){

    int n=0;
    double fib_log = 0.0;
    while (fib_log<999.0){
        ++n;
        fib_log = log10(1/sqrt(5)) + n*log10((sqrt(5) + 1) / 2);
    }
    printf("First term in the Fibonacci sequence to contain 1000 digits - %d\n", n);


}

