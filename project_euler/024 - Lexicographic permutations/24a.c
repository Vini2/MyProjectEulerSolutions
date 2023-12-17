#include<stdio.h>
#include <string.h>

void print(int *j,char *c)
{
   int i,k,h;
   for(i=0;i<10;i++){
      printf("%c",c[j[i]-1]);
      if(j[i]!=10){
         for(k=j[i];k<10;k++)
            c[k-1]=c[k];
      }
   }
   printf("\n");
}

int main()
{
   char c[10]={'0','1','2','3','4','5','6','7','8','9'};
   char a='9';
   char t[10];
   int n[10];
   long long int i=1;
   int j[10];
   j[9]=1;
   i=1;
   for(j[0]=1;j[0]<=10;j[0]++)
      for(j[1]=1;j[1]<=9;j[1]++)
         for(j[2]=1;j[2]<=8;j[2]++)
            for(j[3]=1;j[3]<=7;j[3]++)
               for(j[4]=1;j[4]<=6;j[4]++)
                  for(j[5]=1;j[5]<=5;j[5]++)
                     for(j[6]=1;j[6]<=4;j[6]++)
                        for(j[7]=1;j[7]<=3;j[7]++)
                           for(j[8]=1;j[8]<=2;j[8]++){
                              if(i==1000000){
                                 print(j,c);
                                 return 1;
                              }
                              i++;
                           }
}
