#include<stdio.h>

int i,j;

main(){

    int ways[101] = {0};
    ways[0] = 1;

    for (i = 1; i < 100; i++){
        for (j = i; j <= 100; j++){
            ways[j] += ways[j - i];
        }
    }

    printf("The no. of ways that one hundred can be written as a sum of at least two positive integers - %d\n", ways[100]);


}


