
#include <stdio.h>
#include <stdbool.h>

#include "sort.h"

void _swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int bubble_sort(int* array, int len)
{
   int i = 0;

    while(true)
    {
        bool changed = false;

        for(i = 1; i < len; ++i)
        {
            if(array[i] < array[i - 1])
            {
               _swap(&array[i], &array[i - 1]);
               changed = true;
            }
        }

        if(changed == false)
            break;
    }

    return 0;
}

int quick_sort(int* array, int len)
{
    int left = 0;
    int right = len - 1;
    int pivot = (left + right) / 2;
    int pivot_value = array[pivot];
    int swap = left;

    if(left >= right)
        return 0;

    _swap(&array[pivot], &array[right]);

    for (int i = left; i < right; ++i)
    {
        if (array[i] <= pivot_value)
        {
            _swap(&array[i], &array[swap]);
            ++swap;
        }
    }
    _swap(&array[swap], &array[right]);

    quick_sort(array, swap - left);
    quick_sort(array + swap + 1, right - swap);

    return 0;
}
