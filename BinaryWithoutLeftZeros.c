#include <stdio.h>
#include <stdlib.h>

void Binary_WithOutLeftZeros(int x)
{
     int cnt=0,i,num=0;
     for(i=0;((x<<i)&0x80000000)==0;i++)
        {
            cnt++;
        }

        for( ;cnt<32;cnt++)
        {
            num = ((x<<cnt)&0x80000000)>>31;

            printf("%d",num);

        }
        printf("\n");
}

int main()
{
    int x;

    while (1)
    {
        printf("Enter the number : ");

        scanf("%d",&x);
        Binary_WithOutLeftZeros(x);



    }

}
