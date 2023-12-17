#include <stdio.h>

int main (void){

    int a,b=0,c=0,d;

    for(a=1; a<101; a++){

        b+=(a*a);

        c+=a;

    }

    printf("Sum of the squares : %d\n", b);

    d=c*c;
    printf("Square of the sum : %d\n", d);

    printf("difference between the sum of the squares of the first one hundred natural numbers and the square of the sum : %d\n", d-b);

}
