#include<stdio.h>
int main(){
   int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
   int i,month,year,day=1,sundays=0,a;

   for(year=1900;year<=2000;year++){

   //determine whether February has 28 or 29 days
      if(year%400==0)
        days[1]=29;
      else if(year%100==0)
        days[1]=28;
      else if(year%4==0)
        days[1]=29;
      else
        days[1]=28;

      // Can use this also --> days[1]=(year%100!=0 && year%4==0)?29:28;

      for(month=0;month<12;month++){

         for(i=1;i<=days[month];i++){
            day++;
            if(day%7==1&&i==1)
                sundays++; //count sundays falling on the first of the month
         }
      }

      if(year==1900)
        a=sundays; //no. of sundays falling on the first of the month in year 1900
   }
   printf("No. of Sundays which fell on the first of the month in the twentieth century : %d\n",sundays-a);
}
