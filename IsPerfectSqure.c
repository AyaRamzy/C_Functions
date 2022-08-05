#include <stdio.h>
#include <stdlib.h>

void IsPerfectSquare(int num)
{
    int i=1,flag=0;

    while(i<= num)
    {
        flag =0;

        if((i*i) == num)
        {
            printf("%d is perfect square\n",num);
            flag = 1;
            break;
        }
        i++;
    }
    if(flag == 0)
    {
        printf("%d is not perfect square\n",num);

    }

}

int main()
{
    int n;
    while (1)
    {
        printf("Enter the number : ");
        scanf("%d",&n);
        IsPerfectSquare(n);
    }


}
