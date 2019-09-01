
#include <stdio.h>


/**
 * array : the collection of data;
 *  len : the length of collection.
 *  value : the element you want to find.
 */
int binary_search(int *array, int len, int value)
{
    int low = 0;
    int high = len - 1;
    int mid = 0;

    while(low <= high )
    {
        mid = (low + high)/2 ;

        if ( value == array[mid] )
        {
            return mid;
        }
        else if (value > array[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}
