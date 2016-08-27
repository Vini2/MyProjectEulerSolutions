#include <stdio.h>

int i,j,n=0,sum1 = 0;
int abundant[6965] = {0};
int non[28123] = {0};

main(){

    for(i=12; i<=28123; i++){ // Determine the abundant numbers below 28123 and store them
        int sum = 0;
        int a = 1;
        while(a<i){
            if(i%a==0){
                sum+=a;
            }
            ++a;
        }
        if(sum>i){
            abundant[n] = i;
            ++n;
        }

    }

    for(i=0; i<28123; i++){     // Store the numbers from 0 to 28123
        non[i]=i;
    }

    for(i=0; i<3500; i++){
        for(j=i; j<6965; j++){
            int num = abundant[i]+abundant[j];
            if (num <= 28123) { // Check whether the sum of the 2 abundant numbers is less than 28123
                non[num]=0;     // make the num th number of non[] array zero
            } else {
                break;
            }
        }
    }

    for(i=0; i<28123; i++){
        sum1+=non[i];           // Calculate the sum of the numbers which cannot be written as the sum of two abundant numbers
    }

    printf("Sum of all the positive integers which cannot be written as the sum of two abundant numbers = %d\n", sum1);

}
