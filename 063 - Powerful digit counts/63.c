#include <stdio.h>

int i,j,count1=0;

main(){

    for(i=1; i<50; i++){

        for(j=1; j<50; j++){

            double number = pow(i, j);      //Calculate the number i^j

            if(digitCount(number)==j){      //Check whether number of digits is equal to the power
                printf("%d^%d = %lf\n", i, j, number);
                ++count1;                   //Count the numbers
            }
        }

    }

    printf("\nThe number of n-digit positive integers which are also an nth power - %d\n", count1);

}

int digitCount(double num)  // Function to check the number of digits
{
    int n = 0;
    while(num>=1){
        num/=10;
        ++n;
    }
    return n;               //Return the number of digits
}

