#include<stdio.h>
#include<math.h>
#define limit 1000000

int array[limit];
int sumofdivisor[limit];
int temp[limit];

int search(int num ,int count)
{

    int i;

    for(i=0;i<count;++i)
        if(temp[i]==num)
            return i;

    return -2;


}


int call(int num ,int count)
{

        if(num>=limit)
            return -1;

        if(array[num-1]==-1)
            return -1;

        if(array[num-1]!=0)
            return -1;

        int val=search(num,count);

        if(val==0)
            return count;

        if(val!=-2)
            return -1;

        temp[count++]=num;

        return(call(sumofdivisor[num-1],count));

}

int main()
{
        int i,j,max=0,min=limit;

        for(i=0;i<limit;++i)
        {
                array[i]=-1;
                sumofdivisor[i]=1;
        }

        for(i=2;i<limit;++i)
        {
                if(array[i-1]==0)
                   continue;

                for(j=2*i;j<limit;j=j+i)
                       array[j-1]=0;


        }

        sumofdivisor[0]=0;

        for(i=2;i<limit;++i)
            for(j=2*i;j<limit;j=j+i)
                    sumofdivisor[j-1]+=i;

        for(i=4;i<limit;++i)
        {
                if(array[i-1]==-1)
                    continue;

                if(array[i-1]!=0)
                    continue;

                array[i-1]=call(i,0);



        }

        for(i=0;i<limit;++i)
            if(array[i]>array[max])
                max=i;

        j=max+1;

        for(i=0;i<array[max];++i)
        {

            if(sumofdivisor[j-1] < min)
                     min=j;
            j=sumofdivisor[j-1];

        }

        printf("\nlongest chain is %d with minimum element = %d",max+1,min);

        return 0;
}
