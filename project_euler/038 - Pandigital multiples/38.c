#include <stdio.h>

long i,j,n=0,ans = 0;

main(){

    for(i=9999; i>9000; i--){

        long num1 = i;          // Calculate the concatenated product
        long num2 = 2*i;
        long num3 = num1;
        while(num3>0){
            num1*=10;
            num3/=10;
        }
        num1*=10;
        ans = num1+num2;

        if(isPandigital(ans, 123456789)){   //Check whether pandigital
            break;
        }

    }

    printf("i = %ld\n", i);
    printf("The largest 1 to 9 pandigital 9-digit number that can be formed \n");
    printf("as the concatenated product of an integer with (1,2, ... , n) where n > 1 is %ld\n", ans);

}



int isPandigital (long num1, long num2) { // Function to check pandigital
    long digits[10]={0};
    long i;

    while (num1 != 0) {
        ++digits[num1%10];
        num1 /= 10;
    }

    while (num2 != 0) {
        --digits[num2%10];
        num2 /= 10;
    }

    for (i = 0; i < 10; i++)
        if (digits[i] != 0)
            return 0;

    return 1;
}

