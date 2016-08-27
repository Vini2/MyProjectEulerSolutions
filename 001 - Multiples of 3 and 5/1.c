#include<stdio.h>
main(){

int a,i;

for(a=1; a<1000; a++){

if(a%3==0 || a%5==0){

i = i+a;

}
}
printf("Sum of all the multiples of 3 or 5 below 1000 : %d", i);
}
