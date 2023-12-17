#include<stdio.h>
#include<math.h>
#include<stdint.h>

int64_t b,i,j,k,l,n,m=1,count1=0;
int64_t a[908] = {0};
int64_t nums[50000000] = {0};

main(){

    a[0]=2;

    for(b=3; b<=7071; b+=2){    //Store the primes up to 7071
        if(isPrime(b)){
            a[m]=b;
            ++m;
        }
    }

    for(i=0; i<908; i++){
        for(j=0; j<908; j++){
            for(k=0; k<908; k++){

                n = (a[i]*a[i])+(a[j]*a[j]*a[j])+(a[k]*a[k]*a[k]*a[k]);     //Calculate the number which is expressed as the sum of a prime square, prime cube, and prime fourth power

                if(n<50000000)          //Check whether the number is less than 50 000 000
                    nums[n]=n;
                else
                    break;

            }
        }
    }

    for(b=0; b<50000000; b++){
        if(nums[b]!=0){
            ++count1;                   //Count the numbers which were saved at their relevant indices
        }
    }

    printf("The count of numbers below fifty million that can be expressed as the sum of a prime square, prime cube, and prime fourth power - %I64d\n", count1);

}


int isPrime(int64_t num){  // Function to check whether a number is prime

    int64_t j;
    int prime = 1;

    for (j=2; j<=sqrt(num); j++)
    {
        if (num % j == 0)
        {
            prime = 0;
            break;
        }
    }

    return prime;
}

