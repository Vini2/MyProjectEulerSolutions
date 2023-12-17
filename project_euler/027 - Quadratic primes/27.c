#include <stdio.h>

int i,j,a,b,prime,n_max=0,i_max=0,j_max=0;

main(){

    for(i=-999; i<1000; i++){
        for(j=-999; j<1000; j++){
            int n=0;
            a = (n*n)-(i*n)+j;

            while((n*n)+(i*n)+j>0&&checkPrime((n*n)+(i*n)+j)){
                ++n;        //Count number of primes
            }

            if (n > n_max){ //Check maximum numbers of primes
                i_max = i;
                j_max = j;
                n_max = n;
            }


        }
    }

    printf("No. of primes = %d \ni = %d, j = %d\n", n_max, i_max, j_max); //n=71, i=-61, j=971
    printf("Product of the coefficients = %d\n", i_max*j_max); // Product = -59231

}

int checkPrime(int num){  //Function which checks whether a number is prime
    prime = 1;

    for(b=2; b<num; b++){
        if(num==2){
            prime = 1;
            break;
        }
        else if(num%b==0 || num==1 || num==0){
            prime = 0;
            break;
        }
    }

    if(prime){
        return 1;
    }
    else{
        return 0;
    }
}
