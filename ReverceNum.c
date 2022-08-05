#include <stdio.h>
#include <stdlib.h>
void Reverce(int num)
{
    if(num<0)
        {
            printf("-");
            num =-num;
        }
        while(num!=0)
        {
            printf("%d",num%10);
            num/=10;
        }
        printf("\n");

}

int main()
{
    int num;

    while(1)
    {
        printf("Enter the number : ");
        scanf("%d",&num);
        Reverce(num);

    }

}
