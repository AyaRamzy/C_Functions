#include <stdio.h>
#include <stdlib.h>

int SumOfAllNmuber(int num)
{
    int sum=0,i=1,n;
    while(i<=num)
    {
        scanf("%d",&n);
        sum+=n;
        i++;
    }
    return sum;

}

int main()
{
    int num;
    while(1)
    {
        printf("Enter the number : ");
        scanf("%d",&num);

        printf("Sum = %d\n",SumOfAllNmuber(num));

    }

    return 0;
}
