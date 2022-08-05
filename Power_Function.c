#include <stdio.h>

long long int Pow(int num,int pow)
{
    int i,res=1;
    for(i=0;i<pow;i++)
    {
        res*=num;
    }
    return res;
}
int main()
{
    int n,p,res;

    while(1)
    {
        printf("Enter num then power : ");
        scanf("%d%d",&n,&p);
        res = Pow(n,p);
        printf("Result = %d\n",res);

    }

}
