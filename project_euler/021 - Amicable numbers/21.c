#include <stdio.h>

unsigned int sum_of_divisors1, sum_of_divisors2, num, i, amicable_sum=0;

main(){

    for(num=1; num<10000; num++){

        sum_of_divisors1=0;
        sum_of_divisors2=0;

        i=1;
        while(i<num){
            if(num%i==0)
                sum_of_divisors1+=i; //sum of the devisors of num
            ++i;
        }

        i=1;
        while(i<sum_of_divisors1){
            if(sum_of_divisors1%i==0)
                sum_of_divisors2+=i; //sum of the devisors of sum_of_divisors1
            ++i;
        }

        if(sum_of_divisors2==num && sum_of_divisors1!=sum_of_divisors2){ // check whether amicable
            printf("Amicable pairs %d, %d\n\n", sum_of_divisors1, sum_of_divisors2);
            amicable_sum = amicable_sum + sum_of_divisors1 + sum_of_divisors2; // calculate sum of all amicable pairs
        }

    }

    printf("Sum of all the amicable numbers under 10000 = %d\n", amicable_sum/2);

}
