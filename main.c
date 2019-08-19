#include <stdio.h>
#include <stdlib.h>
#define SZ 10
////////////////////////////////////////////////////////
void MinMax(int*arr, int size, int*m, int len);
void bubble_sort(int*arr, int size);
////////////////////////////////////////////////////////
int main()
{
    int i;
    int rez[2];
    int arr[SZ] = {12, 5, -6, 25, 3, 0, 7, 34, 15, 144};

    for(i = 0; i < SZ; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    MinMax(arr, SZ, rez, 2);
    bubble_sort(arr, SZ);

    for(i = 0; i < SZ; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Min = %d\nMax = %d\n", rez[0], rez[1]);
    return 0;
}
////////////////////////////////////////////////////////
void MinMax(int*arr, int size, int*rez, int len)
{
    int i;
    int min, max;
    min = max = arr[0];

    for(i = 0; i < size; i++)
    {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    rez[0] = min;
    rez[1] = max;
}
////////////////////////////////////////////////////////
void bubble_sort(int*arr, int size)
{
    int i, j, tmp = 0, flag;

    for(i = 0; i < size-1; i++)
    {
        flag = 0;
        for(j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                flag = 1;
            }
        }
            if(!flag)
                break;
    }
}
