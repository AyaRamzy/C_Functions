#include <stdio.h>
#include <stdlib.h>

void SumOfEven(int num)
{
    int sum=0;
    if(num %2 == 0)
    {
        sum += num;
        printf("Sum of these number = %d",sum);
    }

}

