#include <stdio.h>
int MaxXORBetweenTwoNum(int L,int R)
{
    int XOR,MAX = 0,i,j,VL,VR;
    for(i=L; i<=R; i++)
    {
        for(j=L; j<=R; j++)
        {
            XOR = i^j;
            if(XOR>MAX)
            {
                MAX = XOR;
                VL = i;
                VR = j;
            }
        }
    }

    return MAX;

}


int main()
{
    int L,R,res;
    while(1)
    {
        printf("Enter L then R : ");
        scanf("%d%d",&L,&R);
        res = MaxXORBetweenTwoNum(L,R);
        printf("%d\n",res);


    }

}
