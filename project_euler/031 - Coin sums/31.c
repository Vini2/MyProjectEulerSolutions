#include <stdio.h>
main(){
    int count1=0;
    int i1,i2,i3,i4,i5,i6,i7,i8;
    int a = 1;
    int b = 2;
    int c = 5;
    int d = 10;
    int e = 20;
    int f = 50;
    int g = 100;
    int h = 200;

    for(i1=0; i1>=0;i1++){
        if(i1>=200){break;}
        for(i2=0; i2>=0;i2++){
            if(i2>=100){break;}
            for(i3=0; i3>=0;i3++){
                if(i3>=40){break;}
                for(i4=0; i4>=0;i4++){
                    if(i4>=20){break;}
                    for(i5=0; i5>=0;i5++){
                        if(i5>=10){break;}
                        for(i6=0; i6>=0;i6++){
                            if(i6>=4){break;}
                            for(i7=0; i7>=0;i7++){
                                if(i7>=2){break;}
                                for(i8=0; i8>=0;i8++){
                                    int sum = (a*i1)+(b*i2)+(c*i3)+(d*i4)+(e*i5)+(f*i6)+(g*i7)+(h*i8);
                                    if(sum==200){
                                        ++count1;
                                        printf("Count = %d\n", count1);
                                    }
                                    if(i8>=1){break;}

                                }
                            }
                        }
                    }
                }
            }
        }
    }

    printf("Final count = %d\n", count1+7);//Answer = 73682

}
