#include <stdio.h>
#include <stdlib.h>

void SumOfHoles(int num)
{
    int sum=0,cnt=0;
    while(num>0)
    {

        if(num%10 == 8)
        {
            cnt+=2;
        }
        if(num%10 == 0 ||num%10 == 4|| num%10 ==6 || num%10 ==9)
        {
            cnt+= 1;
        }
        num/=10;

    }
    printf("Sum of holes = %d\n",cnt);

}

