#include<stdio.h>
#include<math.h>
#include<stdint.h>

int i,count0;

main(){

    double a = 3;
    double b = 2;       //Such that a/b
    count0=0;

    for(i=1; i<1000; i++){

        double c = a;
        a+=2*b;         //Calculate numerator and denominator
        b+=c;

        if(a>1000){
            printf("%lf  %lf      ",a,b);
            a/=100;
            b/=100;
            printf("%lf  %lf\n",a,b);
        }

        int a_log = (int)log10(a);  //Calculate the log values of the numerator and denominator
        int b_log = (int)log10(b);

        if(a_log>b_log){        //Check whether the numerator has more digits than the denominator
            ++count0;           //Count the no. of fractions

        }



    }

    printf("The number of fractions that contain a numerator with more digits than denominator - %d\n", count0);
}

