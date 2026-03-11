#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = (int *)malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        arr[i] = i + 1;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // realloc()
    arr = (int *)realloc(arr, 10 * sizeof(int));
    // lets print 10 values as it is without initializing further elements from arr[4]
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // output- from arr[5] it will give garbage value
    // So lets assign proper values from arr[5]
    for (int i = 5; i < 10; i++)
    {
        arr[i] = i + 1;
    }
    // display elements after assigning
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);
    printf("\n");
    // lets see can we access arr now after free
    // arr becomes a dangling pointer
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    // it still prints some of old values, some garbage value, or crash becomes address is temporarily stored in memory
    // but now its not safe
}