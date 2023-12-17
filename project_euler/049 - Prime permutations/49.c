#include <stdio.h>

int b,i,j,k,prime;

main(){

    for(i=1488; i<10000; i++){  // Get the first number i

        if(checkPrime(i)){      // Check whether i is a prime
            j=i+3330;           // Get the second number j

            if(checkPrime(j)&&isPermutation(i,j)){      // Check whether j is a prime and a permutation of i
                k=j+3330;                               // Get the third number k

                if(checkPrime(k)&&isPermutation(i,k)){  // Check whether k is a prime and a permutation of i
                    printf("%d\n",i);
                    printf("%d\n",j);
                    printf("%d\n",k);
                    printf("The 12-digit number in the sequence - %d%d%d\n", i, j, k);
                    break;
                }

            }
        }
    }

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

