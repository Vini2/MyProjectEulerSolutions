#include <stdio.h>

int i, j, k, n, num,sum_of_divisors1, max=0, count1, member, notEqual, notPresent;

main(){

    for(num=10; num<20000; num++){

        int a[90] = {0};
        notPresent = 1;

        sum_of_divisors1=0;
        n=num;
        count1=0;
        notEqual=1;

        while(notEqual&&n<1000000){

            ++count1;                           //count the chain length

            i=1;
            while(i<n){
                if(n%i==0)
                    sum_of_divisors1+=i;        //sum of the divisors of n
                ++i;
            }

            for(k=0; k<count1; k++){

                if(sum_of_divisors1==a[k]){     //check whether sum_of_divisors1 appeared before
                    notPresent = 0;
                    break;
                }

            }

            if(notPresent){
                a[count1] = sum_of_divisors1;   //if sum_of_divisors1 did not appear before store it
            }else{
                break;
            }

            if(sum_of_divisors1==num){          //check whether sum_of_divisors1 is equal to num

                if(max<count1){
                    max = count1;
                    member = num;
                    notEqual = 0;
                    printf("num = %d   count = %d\n", member, max);
                }
            }

            if(sum_of_divisors1==1)
                break;

            n = sum_of_divisors1;
            sum_of_divisors1 = 0;


        }


    }

    printf("\n");
    printf("The smallest member of the longest amicable chain with no element exceeding one million - %d\n", member);
    printf("Chain length - %d\n",max);

}
