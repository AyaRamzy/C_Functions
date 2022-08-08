/****************************************************************************************/
/*C function to return the maximum and minimum number in an 
array and their indexes*/
/***************************************************************************************/
void MinAndMax(int * arr,int size,int * Pmax,int * Pmin)
{
    int i,max =0,min = 0 ;

    for(i=0; i<size; i++)
    {
        if(arr[i]>= arr[max])
        {
            max = i;
        }
        else if (arr[i]<=arr[min])
        {
            min = i;
        }
    }
    *Pmax = max;
    *Pmin = min;

}
/****************************************************************************************/
/*C function to return the index of LAST occurrence of a number in a 
given array. Array index start from 0. If the item is not in the list return -1*/
/***************************************************************************************/
int Array_Search(int * arr,int size,int num)
{
    int i,index=-1;
    for(i=0;i<size;i++)
    {
        if(arr[i]== num)
        {
            index = i;
        }
    }
    return index;

}
