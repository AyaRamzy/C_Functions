#include <stdio.h>
#include <stdlib.h>

int SumOfAllNumbers_BetweenTwoNum(int n1,int n2)
{
    int max =0,min=0,i=0,sum=0;
    if(n1>n2)
    {
        max = n1;
        min = n2;
    }
    else
    {
        max = n2;
        min = n1;
    }
    i= min+1;
    while(i!= max)
    {
        sum += i;
        i++;
    }
    return sum;

}

int main()
{
    int x,y;
    while(1)
    {
        printf("Enter two numbers : ");
        scanf("%d%d",&x,&y);

        printf("Sum of All Numbers = %d\n",SumOfAllNumbers_BetweenTwoNum(x,y));

    }

}
