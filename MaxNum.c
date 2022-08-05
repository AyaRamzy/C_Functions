#include <stdio.h>
#include <stdlib.h>

int Max(int num)
{
    int maxi=0,i=1,n,mini=100000;
    while(i<=num)
    {
        scanf("%d",&n);
        if(n > maxi)
        {
            maxi = n;

        }

        i++;
    }
    return maxi;

}

int main()
{
    int num;

    while(1)
    {
        printf("Enter the number : ");
        scanf("%d",&num);
        printf("Max num  = %d\n",Max(num));

    }


    return 0;
}