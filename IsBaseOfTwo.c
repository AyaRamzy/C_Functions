#include <stdio.h>
#include <stdlib.h>

void IsBaseOfTwo(int n)
{
    int num,flag;
    num = n;
    flag =1;

    while( num>1 )
    {
        if(num%2!=0)
        {
            flag = 0;
        }
        num = num/2;

    }
    if(flag == 1)
    {
        printf("%d is a base of 2\n",n);
    }
    else
    {
        printf("%d is not a base of 2\n",n);
    }

}

int main()
{
    int x;

    while (1)
    {
        printf("Enter the number : ");
        scanf("%d",&x );
        IsBaseOfTwo(x);

    }

}
