#include <stdio.h>
#include <stdlib.h>

int Min(int num)
{
    int mini=100000,i=1,n;
    while(i<=num)
    {
        scanf("%d",&n);
        if(n < mini)
        {
            mini = n;

        }

        i++;

    }
    return mini;

}

int main()
{
    int num;

    while(1)
    {
        printf("Enter the number : ");
        scanf("%d",&num);
        printf("Min num  = %d\n",Min(num));

    }


    return 0;
}
