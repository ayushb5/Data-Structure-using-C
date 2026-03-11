#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = (int *)calloc(10, sizeof(int));
    // Printing elements without initialization to compare malloc() with calloc()
    // malloc by default assigns garbage value to each element
    // calloc by default assigns 0 to all elements
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // Insert Elements
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i * 10;
    }
    // Display elements
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}