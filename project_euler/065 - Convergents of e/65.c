#include<stdio.h>

int i, j, m=2, sum=0;
int a[100] = {0}, b[100] = {0}, c[100] = {0};

main(){

    //Common pattern -->
    //n(k) = (2^k)*n(k-1) + n(k-2) (k increases by 1 in every 3 numbers of the sequence)
    //n(k+1) = n(k) + n(k-1)
    //n(k+2) = n(k+1) + n(k)

    a[99] = 2;                      //The first convergent
    b[99] = 3;                      //The second convergent

    for (i = 2; i < 101; i+=3){

        int temp_b[100] = {0};

        int rem = 0;
        printf("temp_b\t");
        for(j = 99; j>=0; j--){     //Multiply b[] by m
            temp_b[j] = (b[j]*m+rem)%10;
            rem = (b[j]*m+rem)/10;
            printf("%d", temp_b[j]);
        }
        printf("\n");


        rem = 0;
        printf("c\t");
        for(j = 99; j>=0; j--){     //Calculate c[] by adding temp_b[] and a[]
            c[j] = (temp_b[j]+a[j]+rem)%10;
            rem = (temp_b[j]+a[j]+rem)/10;
            printf("%d", c[j]);
        }
        printf("\n");

        rem = 0;
        printf("a\t");
        for(j = 99; j>=0; j--){     //Calculate a[] by adding b[] and c[]
            a[j] = (b[j]+c[j]+rem)%10;
            rem = (b[j]+c[j]+rem)/10;
            printf("%d", a[j]);
        }
        printf("\n");

        rem = 0;
        printf("b\t");
        for(j = 99; j>=0; j--){     //Calculate b[] by adding a[] and c[]
            b[j] = (a[j]+c[j]+rem)%10;
            rem = (a[j]+c[j]+rem)/10;
            printf("%d", b[j]);
        }
        printf("\n\n");

        m+=2;

    }

    for (i = 0; i < 100; i++){      //Sum the digits of the 100th convergent (i.e. the sum of the numbers in array a[] at the end)
        sum+=a[i];
    }

    printf("\nSum of digits in the numerator of the 100th convergent of the continued fraction for e = %d\n", sum);

}


