#include <stdio.h>

int MaxZerosBetweenTwoOnes(int num)
{
    unsigned int  cnt,i,max;
    int j,LastOne,FirstOne;
    max= 0;
    cnt=0;
    if(num == 0)
    {
        printf("0");
    }
    else
    {
        // make j to stop at the Last one of the binary
        for(j=31; j>=0 && (((num>>j)&1)!=1); j--);
        LastOne = j;
        // make i to stop at the fist one of the binary
        for(i=0; j<=LastOne && (((num>>i)&1)!=1); i++);
        FirstOne = i;
        //Start check and count

        for(i= FirstOne; ((num>>i)&1) && i<=LastOne ; i++ )
        {

            cnt=0;
            i++;
            while(((num>>i)&1)==0 && (i<=LastOne))
            {
                cnt++;
                i++;

            }
            if(cnt>= max)
            {
                max=cnt;
                i--;
            }

        }

    }

    return max;

}
int main()
{
    unsigned int  num ,res;
    while(1)
    {

        printf("Enter the num : ");
        scanf("%d",&num);
        res = MaxZerosBetweenTwoOnes(num);
        printf("%d\n",res);


    }

}
