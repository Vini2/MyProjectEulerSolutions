#include<stdio.h>
main(){
    int i, c;

    for(i=2520;;i++){

        if ((i%11)==0 && (i%12)==0 && (i%13)==0 && (i%14)==0 && (i%15)==0 && (i%16)==0 && (i%17)==0 && (i%18)==0 && (i%19)==0 && (i%20)==0){
            printf("The smallest number divisible by all numbers 1-20 is : %d\n", i);
            break;
    }
}
}

