#include <stdio.h>

int i,n=1,num;
int decimalNum[2000000]={0};

main(){

    for(i=1; i<200000; i++){
        num=i;
        if(num<10){
            decimalNum[n]=num%10;
            ++n;
        }
        else if(num<100){
            decimalNum[n]=num/10;
            ++n;
            int num1 = num/10;
            decimalNum[n]=num - num1*10;
            ++n;
        }
        else if(num<1000){
            decimalNum[n]=num/100;
            ++n;
            int num1 = num/100;
            num = num - num1*100;
            decimalNum[n]=num/10;
            ++n;
            int num2 = num/10;
            decimalNum[n] = num-num2*10;
            ++n;
        }
        else if(num<10000){
            decimalNum[n]=num/1000;
            ++n;
            int num1 = num/1000;
            num = num - num1*1000;
            decimalNum[n]=num/100;
            ++n;
            int num2 = num/100;
            num = num - num2*100;
            decimalNum[n] = num/10;
            ++n;
            int num3 = num/10;
            decimalNum[n] = num-num3*10;
            ++n;
        }
        else if(num<100000){
            decimalNum[n]=num/10000;
            ++n;
            int num1 = num/10000;
            num = num - num1*10000;
            decimalNum[n]=num/1000;
            ++n;
            int num2 = num/1000;
            num = num - num2*1000;
            decimalNum[n] = num/100;
            ++n;
            int num3 = num/100;
            num = num - num3*100;
            decimalNum[n] = num/10;
            ++n;
            int num4 = num/10;
            decimalNum[n] = num-num4*10;
            ++n;
        }
        else if(num<1000000){
            decimalNum[n]=num/100000;
            ++n;
            int num1 = num/100000;
            num = num - num1*100000;
            decimalNum[n]=num/10000;
            ++n;
            int num2 = num/10000;
            num = num - num2*10000;
            decimalNum[n] = num/1000;
            ++n;
            int num3 = num/1000;
            num = num - num3*1000;
            decimalNum[n] = num/100;
            ++n;
            int num4 = num/100;
            num = num - num4*100;
            decimalNum[n] = num/10;
            ++n;
            int num5 = num/10;
            decimalNum[n] = num-num5*10;
            ++n;
        }
        else if(num<10000000){
            decimalNum[n]=num/1000000;
            ++n;
            int num1 = num/1000000;
            num = num - num1*1000000;
            decimalNum[n]=num/100000;
            ++n;
            int num2 = num/100000;
            num = num - num2*100000;
            decimalNum[n] = num/10000;
            ++n;
            int num3 = num/10000;
            num = num - num3*10000;
            decimalNum[n] = num/1000;
            ++n;
            int num4 = num/1000;
            num = num - num4*1000;
            decimalNum[n] = num/100;
            ++n;
            int num5 = num/100;
            num = num - num5*100;
            decimalNum[n] = num/10;
            ++n;
            int num6 = num/10;
            decimalNum[n] = num-num6*10;
            ++n;
        }

    }

    printf("d1 = \t\t%d\n", decimalNum[1]);
    printf("d10 = \t\t%d\n", decimalNum[10]);
    printf("d100 = \t\t%d\n", decimalNum[100]);
    printf("d1000 = \t%d\n", decimalNum[1000]);
    printf("d10000 = \t%d\n", decimalNum[10000]);
    printf("d100000 = \t%d\n", decimalNum[100000]);
    printf("d1000000 = \t%d\n", decimalNum[1000000]);

    int ans = decimalNum[1]*decimalNum[10]*decimalNum[100]*decimalNum[1000]*decimalNum[10000]*decimalNum[100000]*decimalNum[1000000];
    printf("\nValue of = d1 x d10 x d100 x d1000 x d10000 x d100000 x d1000000 = %d\n", ans);


}

