#include <stdio.h>

int limit=1000000,i,b,sum=-8, prime, max_sum;

main(){

    i=3;

    while(sum<limit){
        if(checkPrime(i)){
            printf("prime %d\n", i);
            sum+=i;
        }
        printf("sum %d\n", sum);
        if(checkPrime(sum)){
            printf("prime sum %d\n", sum);
            if(sum>max_sum)
                max_sum=sum;
        }
        i++;
    }

    printf("\nPrime, below one-million, which can be written as the sum of the most consecutive primes = %d\n", max_sum);

}

int checkPrime(int num){ //Function which checks whether a number is prime
    prime = 1;
    for(b=2; b<num; b++){
        if(num%b==0){
            prime = 0;
            break;
        }
    }

    if(prime)
        return 1;
    else
        return 0;
}
