#include<stdio.h>
main(){
int i,flag=0,ctr=0,sum=0;
long long int j=1;
		do
		{
			flag=0;
			for(i=1;i<=j;i++)
			{
				if(j%i==0)
					flag++;
			}
			if(flag==2)
			{
				ctr++;
			}
			j++;
		}while(ctr!=10001);
		printf("%dth Prime Number: %d", ctr,(j-1));
}
