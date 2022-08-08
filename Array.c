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
