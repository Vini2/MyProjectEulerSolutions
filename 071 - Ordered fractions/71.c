#include <stdio.h>
#include <stdint.h>

int64_t d, best_n=0, best_d=1, dif=1;
double d1 = 3/7.0;

main(){

    for(d=1000000; d>0; d--){

        int64_t n = (3*d-1)/7;              //calculate n for relevant d

        if(n*best_d>d*best_n){              //check whether d and n are valid for the pattern

            double d2 = n/(double)d;

            if(dif>(d2-d1)){                //check the least difference and determine best d and n
                best_n = n;
                best_d = d;
                dif = d2-d1;
            }

        }


    }

    printf("best n = %I64d, best d = %I64d\n\n", best_n, best_d);
    printf("By listing the set of reduced proper fractions for d <= 1,000,000 in ascending order of size, \nthe numerator of the fraction immediately to the left of 3/7 - %I64d\n",best_n);

}
