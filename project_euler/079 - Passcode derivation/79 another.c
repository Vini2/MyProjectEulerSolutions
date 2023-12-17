#include <stdio.h>
#include <stdlib.h>
int d_key[3];

int valid_passcode(int *d_pass,int l,int key){
   int i=0,k=2;
   while(key){
       d_key[i++]=key%10;
       key/=10;
   }
   for(i=l-1;i>=0;i--){
      if(d_pass[i]==d_key[k])k--;
      if(k==-1)break;
   }
   return (k==-1)?1:0;
}

int main(){
   int keys[50],i,passcode;
   FILE *fp = fopen("keylog.txt","r");
   if(fp!=NULL){
      for(i=0;i<50;i++){
        fscanf(fp,"%d",&keys[i]);
     }
   }
   else
    exit(0);

   int *d = calloc(20,sizeof(int));
   int sum,m,k,l=2,finished=0,j;

   d[0]=9;d[1]=9;j=99;

   while(!finished){
      m=0;
      sum = d[0]+1;
      d[0]=sum%10;
      m=sum/10;
      for(k=1;k<l && m;k++){
         sum = d[k]+m;
         d[k]=sum%10;
         m = sum/10;
      }
      if(m)d[l++]=1;

      for(i=0;i<50;i++){
        if(!(valid_passcode(d,l,keys[i])))break;
      }
      if(i==50)finished=1;
      ++j;
   }
   printf("%d",j);
   free(d);
return 0;
}
