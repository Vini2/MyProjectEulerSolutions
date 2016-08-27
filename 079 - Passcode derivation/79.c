#include <stdio.h>

int i,j;
char num[50][3] = {"319", "680", "180", "690", "129", "620", "762", "689", "762", "318", "368", "710", "720", "710", "629", "168", "160", "689", "716", "731", "736", "729", "316", "729", "729", "710", "769", "290", "719", "680", "318", "389", "162", "289", "162", "718", "729", "319", "790", "680", "890", "362", "319", "760", "316", "729", "380", "319", "728", "716"};

int before[10][10] = {11};
int after[10][10] = {0};

main(){

    for(i = 0; i<50; i++){

        afterNum(num[i][0], num[i][1]);
        afterNum(num[i][1], num[i][2]);
        beforeNum(num[i][0], num[i][1]);
        beforeNum(num[i][1], num[i][2]);

    }

    for(i = 0; i<10; i++){

        printf("before %d - ", i);

        for(j = 0; j<10; j++){
            if(before[i][j]!=0)
                printf("%d, ", j);
        }

        printf("\n");

    }

    for(i = 0; i<10; i++){

        printf("after %d - ", i);

        for(j = 0; j<10; j++){
            if(after[i][j]!=0)
                printf("%d, ", j);
        }

        printf("\n");

    }

    //Answer = 73162890

}

void afterNum(char a, char b){
    int n = b-'0';
    if(a=='0'){
        after[0][n] = 1;
    } else if(a=='1'){
        after[1][n] = 1;
    } else if(a=='2'){
        after[2][n] = 1;
    } else if(a=='3'){
        after[3][n] = 1;
    } else if(a=='4'){
        after[4][n] = 1;
    } else if(a=='5'){
        after[5][n] = 1;
    } else if(a=='6'){
        after[6][n] = 1;
    } else if(a=='7'){
        after[7][n] = 1;
    } else if(a=='8'){
        after[8][n] = 1;
    } else if(a=='9'){
        after[9][n] = 1;
    }
}

void beforeNum(char b, char a){
    int n = b-'0';
    if(a=='0'){
        before[0][n] = 1;
    } else if(a=='1'){
        before[1][n] = 1;
    } else if(a=='2'){
        before[2][n] = 1;
    } else if(a=='3'){
        before[3][n] = 1;
    } else if(a=='4'){
        before[4][n] = 1;
    } else if(a=='5'){
        before[5][n] = 1;
    } else if(a=='6'){
        before[6][n] = 1;
    } else if(a=='7'){
        before[7][n] = 1;
    } else if(a=='8'){
        before[8][n] = 1;
    } else if(a=='9'){
        before[9][n] = 1;
    }
}
