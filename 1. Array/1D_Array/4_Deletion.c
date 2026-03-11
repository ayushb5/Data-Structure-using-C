#include <stdio.h>

int main()
{
    int arr[50], size, pos, num;
    printf("Enter size of an array:");
    scanf("%d", &size);

    if (size < 50)
    {
        // Insert all elements
        printf("\nEnter Elements in an array:");
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }

        printf("\nArray after Inserting all elements:");
        for (int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }

        // Delete at specific position

        printf("\nEnter position to Delete element:");
        scanf("%d", &pos);

        for (int i = pos - 1; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;

        printf("\nArray after deleting element from position %d is : ", pos);
        for (int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }

        // Delete at beginning

        printf("\nEnter 1 to delete the Element at beginning:");
        scanf("%d", &num);
        if (num == 1)
        {
            for (int i = 0; i < size - 1; i++)
            {
                arr[i] = arr[i + 1];
            }
            size--;
            printf("\n------------\n");
            printf("Elements after deletion of first element:");
            for (int i = 0; i < size; i++)
            {
                printf("%d ", arr[i]);
            }
        }
        // Delete at end

        printf("\nEnter 2 to delete the Element at end:");
        scanf("%d", &num);
        if (num == 2)
        {
            size--;
            printf("\n------------\n");
            printf("Elements after deletion of last element:");
            for (int i = 0; i < size; i++)
            {
                printf("%d ", arr[i]);
            }
        }
    }
}