#include <stdio.h>

struct Person
{
    int age;
};

int main()
{
    // Array of structure declaration
    struct Person p[3];
    // lets initialize array of structure through loop
    for (int i = 0; i < 3; i++)
    {
        printf("Enter age for Person %d: ", i + 1);
        scanf("%d", &p[i]);
    }

    // Display Age of each person
    for (int i = 0; i < 3; i++)
    {
        printf("\nAge of Person %d: %d", i + 1, p[i]);
    }
}