#include <stdio.h>
#include <math.h>

long long int i,j,sum=0;
double a;


main()
{
    for(i=286; i>0; i++){

        a = i*(i+1)/2.0; //calculate the i^th triangular number

        if(isPentNum(a) && isHexNum(a)){ //check whether a is a pentagonal number and a hexagonal number
            printf("The next triagonal, pentagonal and hexagonal number after 40755 is %lf\n", a);
            //answer = 1533776805
            break;
        }


    }

}

//Check whether the number is a triangle number
//n = (sqrt(1 + 8 * num) -1.0) / 2.0;
//If n is a whole number then num is a triangle number


int isPentNum(double number){

    double pentNumResult = (sqrt(1 + 24 * number) + 1.0) / 6.0; //check whether the number is a pentagonal number
    int pentNumResult1 = (int)pentNumResult;
    double pentNumResult2 = (int)pentNumResult1;
    double dif = pentNumResult - pentNumResult2;

    if(dif==0.0){return 1;}
    else{return 0;}
}

int isHexNum(double number){

    double hexNumResult = (sqrt(1 + 8 * number) + 1.0) / 4.0; //check whether the number is a hexagonal number
    int hexNumResult1 = (int)hexNumResult;
    double hexNumResult2 = (int)hexNumResult1;
    double dif = hexNumResult - hexNumResult2;

    if(dif==0.0){return 1;}
    else{return 0;}
}


