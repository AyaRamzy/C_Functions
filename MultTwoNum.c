#include <stdio.h>
#include <stdlib.h>

int MultiTwoNum(int n1,int n2)
{
    int i=1,mult=0;
    while (i<=n1)
    {
        mult+=n2;
        i++;
    }
    return mult;

}
int main()
{
    int x,y;
    while(1)
    {
        printf("Enter two num : ");
        scanf("%d%d",&x,&y);
        printf("Result  = %d\n",MultiTwoNum(x,y));

    }
}
