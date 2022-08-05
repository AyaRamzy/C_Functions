#include <stdio.h>
#include <stdlib.h>

void SumOfDigits(int num)
{
    int sum;
    sum = 0;
    while(num>0)
    {
        sum =sum + (num%10);
        num=num/10;
    }
    printf("Sum of digits = %d\n",sum);

}

int main()
{
    int n;

    while (1)
    {

        printf("Enter the number : ");
        scanf("%d",&n);
        SumOfDigits(n);

    }
}
