#include <stdio.h>
main(){
    int i, h = 0, sum = 0, a[500]= {0};

    a[0]=1;

    for (i = 1; i <= 100; i++){
        int j;
        int rem = 0;
        int p = 1;

        for (j = 0;  j <= h; j++){
            p = (a[j]*i) + rem;
            a[j] = p % 10;
            rem = p / 10;

            if ( ( rem != 0 ) && ( j == h ) )
                h++;        //Count number of digits in the number
        }
    }

    for (i = 0; i <= h; i++)
        sum += a[i];        //Calculate sum of the digits

    printf("Sum of the digits of the number 100! = %d\n", sum);

}
