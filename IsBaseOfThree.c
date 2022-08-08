int IsBaseOfThree(int n)
{
    int num,flag;
    num = n;
    flag =1;

    while( num>1 )
    {
        if(num%3!=0)
        {
            flag = 0;
        }
        num = num/3;

    }
    if(flag == 1)
    {
       return 0;
    }
    else
    {
        return 1;;
    }

}
