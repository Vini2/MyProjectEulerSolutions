#include <stdio.h>
#include <math.h>

unsigned int n=0, m, bool1, penta_no1, penta_no2;

main(){

    bool1=1;
    while(bool1){

        ++n;
        penta_no1 = n*(3*n-1)/2; //calculate first pentagonal number

        for(m = n-1; m > 0; m--){

            penta_no2 = m*(3*m-1)/2; //calculate second pentagonal number

            if(isPentNum(penta_no1+penta_no2) && isPentNum(penta_no1-penta_no2)){ //check whether the sum and difference of the two numbers are also pentagonal numbers
                printf("OK k=%d, j=%d\n", n, m);
                printf("D=%d\n", penta_no1-penta_no2);
                bool1=0;
                break;
            }

        }

    }

}

//function to check whether the sum and difference of the two numbers are also pentagonal numbers
int isPentNum(int number){

    float pentNumResult = (sqrt(1 + 24 * number) + 1.0) / 6.0; //check whether the number is a pentagonal number
    int pentNumResult1 = (int)pentNumResult;
    float pentNumResult2 = (int)pentNumResult1;
    float dif = pentNumResult - pentNumResult2;

    if(dif==0.0){return 1;}
    else{return 0;}
}


