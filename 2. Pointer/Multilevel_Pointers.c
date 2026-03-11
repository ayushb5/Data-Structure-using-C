#include <stdio.h>

int main()
{
    int val = 10;
    int *ptr1 = &val;
    int **ptr2 = &ptr1; // Multilevel pointer type = double pointer i.e pointer to pointer

    // other types : ***ptr3,****ptr4,*****ptr5, etc

    printf("val:%d\n*ptr1:%d\n**ptr2:%d", val, *ptr1, **ptr2);
}