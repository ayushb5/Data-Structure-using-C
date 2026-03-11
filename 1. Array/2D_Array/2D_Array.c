#include <stdio.h>

int main()
{
    // Declaration
    // int arr[2][3] = {{1, 2, 3}, {4, 5, 6}}; - manually inserting elements
    int arr[2][3];

    // Take input from user
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    // Display Elements
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}