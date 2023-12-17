#include <stdio.h>

unsigned int fifth_power, fifth_power_sum, i, num, a, b, sum=0;

main(){

    for(b=2; b<10000000; b++){

        fifth_power_sum=0;
        num = 0;
        i=b;

        while(1){

            if(i<10){
                num = i;
                fifth_power_sum += fifth(num);
                break;
            }
            else{
                num = i%10;
                i-=num;
                i/=10;
                fifth_power_sum += fifth(num);
            }
        }

        if(fifth_power_sum == b){
            printf("OK - %d\n", b);
            sum+=b;
        }

    }

    printf("Sum of all the numbers that \ncan be written as the sum of fifth powers of their digits = %d\n", sum);

}

int fifth(int a){
    fifth_power=1;
    fifth_power=fifth_power*a*a*a*a*a;
    return fifth_power;
}
