#include <stdio.h>
#include <stdlib.h>

int CountOnesAtNum(int x)
{
    unsigned int i,cnt = 0;
    for(i=0; x>0; i++)
    {
        cnt+=(x&1);
        x=x>>1;

    }
    return cnt;

}

int main()
{
    unsigned int x,res;
    while (1)
    {

        printf("Enter the number : ");
        scanf("%u",&x);
        res = CountOnesAtNum(x);
        printf("res  = %d\n",res);


    }

}
