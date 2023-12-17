#include <stdio.h>

int i, num=3;
int a, b, c;
float product=1;

main(){

    for(b=11; b<100; b++){
        for(a=10; a<b; a++){

            int a_rem = a%10;
            int b_rem = b%10;
            int a1 = a/10;
            int b1 = b/10;

            if(a_rem==b1){

                if((a/(float)b) == (a1/(float)b_rem)){ //determine non-trivial pairs
                    printf("1 answer ---> %f = %f\n", a/(float)b, a1/(float)b_rem);
                    printf("1 - %d, %d\n", a, b);
                    printf("1 - %d, %d\n\n", a1, b_rem);
                    product*=a1/(float)b_rem; //determine product of non-trivial pairs
                }
            }
            else if(b_rem==a1){


                if((a/(float)b) == (a_rem/(float)b1)){ //determine non-trivial pairs
                    printf("2 answer --->  %f = %f\n", a/(float)b, a1/(float)b_rem);
                    printf("2 - %d, %d\n", a, b);
                    printf("2 - %d, %d\n\n", a_rem, b1);
                    product*=a_rem/(float)b1; //determine product of non-trivial pairs
                }
            }
        }
    }

// 1/4*2/5*1/5*4/8 = 1/100

printf("Product = %f\n", product);

}

