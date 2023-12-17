#include <stdio.h>
#include <math.h>

int n=0,prime,b,max=0;
int a[7] = {0};

main(){

    for(n=1000001; n<1000000000; n+=2){

        if(n<10000){
            if(isPermutation(n,1234)&&checkPrime(n)){
                checkMax(n);
            }
        }else if(n<100000){
            if(isPermutation(n,12345)&&checkPrime(n)){
                checkMax(n);
            }
        }else if(n<1000000){
            if(isPermutation(n,123456)&&checkPrime(n)){
                checkMax(n);
            }
        }else if(n<10000000){
            if(isPermutation(n,1234567)&&checkPrime(n)){
                checkMax(n);
            }
        }else if(n<100000000){
            if(isPermutation(n,12345678)&&checkPrime(n)){
                checkMax(n);
            }
        }else if(n<1000000000){
            if(isPermutation(n,123456789)&&checkPrime(n)){
                checkMax(n);
            }
        }

    }

    printf("The largest n-digit pandigital prime that exists = %d\n", max);

}

void checkMax(int num){ // Function to check the maximum number
    if(num>max)
        max = num;
}

int isPermutation (int num1, int num2) { // Function to check permutations
    int digits[10]={0};
    int i;

    while (num1 != 0) {           // Process all digits in num1
        ++digits[num1%10];        // Increment 1 for least significant digit.
        num1 /= 10;               // Get next digit in num1
    }

    while (num2 != 0) {           // Process all digits in num2
        --digits[num2%10];        // Decrement 1 for least significant digit.
        num2 /= 10;               // Get next digit in num2
    }

    for (i = 0; i < 10; i++)      // Check whether digits[i] = 0
        if (digits[i] != 0)
            return 0;

    return 1;
}

int checkPrime(int num)  // Function to check whether a number is prime
{
    prime = 1;
    for(b=2; b<num; b++)
    {
        if(num==2)
        {
            prime = 1;
            break;
        }
        else if(num%b==0)
        {
            prime = 0;
            break;
        }
    }

    if(prime)
        return 1;
    else
        return 0;
}

