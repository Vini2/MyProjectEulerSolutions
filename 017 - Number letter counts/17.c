#include<stdio.h>
main(){

    int a = 3+3+5+4+4+3+5+5+4; // from 1-9
    int b = 3+6+6+8+8+7+7+9+8+8; // from 10-19
    int c = (8*36)+((6+6+5+5+5+7+6+6)*10); // from 20-99

    int d = (a*100)+((a+b+c)*9)+(7*9)+(10*9*99); // from 100-999

    int e = a+b+c+d+11; // from 1-1000

    printf("If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, number of letters used : %d", e);

}
