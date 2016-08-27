#include<stdio.h>
int main(void){
    long long int i,h=0,a[1000];

    for(i=0;i<1000;i++)
        scanf("%1d", &a[i]);

    for(i=0;i<996;i++){
        int m = a[i]*a[i+1]*a[i+2]*a[i+3]*a[i+4];
        //printf("%d\n", m);
        if(i==0){
            h = m;
        }

        if(m>h){
            h = m;
        }
    }

    printf("Greatest product : %d\n", h);
}
