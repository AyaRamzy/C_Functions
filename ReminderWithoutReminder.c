#include <stdio.h>
#include <stdlib.h>

int ReminderTwoNumWithoutRemider(int n1,int n2)
{
    int reminder=0;
     if(n2==0)
    {
        printf("Undefined");
    }
    reminder = n1-((n1/n2)*n2);
    return reminder;
}


int main()
{
    int x,y,reminder=0;
    while(1)
    {
        printf("Enter two number : ");
        scanf("%d%d",&x,&y);
        printf("reminder = %d\n",ReminderTwoNumWithoutRemider(x,y));
    }

    return 0;
}
