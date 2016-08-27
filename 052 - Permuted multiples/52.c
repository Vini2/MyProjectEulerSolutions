#include <stdio.h>

int i,j,n=0,sum1 = 0;

main(){

    for(i=10; i>0; i++){

        if(isPermutation(i, 2*i))
            if(isPermutation(i, 3*i))
                if(isPermutation(i, 4*i))
                    if(isPermutation(i, 5*i))
                        if(isPermutation(i, 6*i)){
                            printf("The smallest positive integer, x, such that 2x, 3x, 4x, 5x, and 6x, contain the same digits - %d\n", i);
                            break;
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
