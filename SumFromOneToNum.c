#include <stdio.h>
#include <stdlib.h>

int SumFromOneToNum(int num)
{
     int sum;
     sum = (num*(num+1)/2);
     return sum;

}

int main()
{
    int num;
    while(1)
    {
        printf("Enter num : ");
        scanf("%d",&num);


        printf("%d\n",SumFromOneToNum(num));


    }

}
