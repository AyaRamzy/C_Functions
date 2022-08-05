#include <stdio.h>
#include <stdlib.h>

void IsPrime(int num)
{
    int i,flag=0;
    if(num<0)
    {
        printf("Wrong number, You must insert positive number");

    }
    if(num== 0 || num== 1)
    {
        printf("%d is not prime \n",num);
        flag = 1;
    }

    for(i=2; i<num && flag==0 ; i++)
    {
        if(num%i==0)
        {
            printf("%d is not prime\n",num);
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("%d is prime \n",num);
    }

}




int main()
{
    int n;

    while(1)
    {

        printf("Enter the number : ");
        scanf("%d",&n);
        IsPrime(n);
    }
    return 0;
}
