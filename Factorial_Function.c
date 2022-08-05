#include <stdio.h>
#include <stdlib.h>


int Fact(int num)
{
    int Factorial=1,i=1;
    if(num <0)
    {
        printf("Wrong number, You must insert Positive Number ");
    }
    else
    {
        while(i<=num)
        {
            Factorial *=i;
            i++;

        }
        return Factorial;

    }
}

int main()
{
    int n;

    printf("Enter Positive interger Number: ");
    scanf("%d",&n);

    printf("Factorial of %d is = %d",n,Fact(n));

    return 0;

}


