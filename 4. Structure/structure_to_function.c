// Passing a structure to a function
#include <stdio.h>

struct Person
{
    int age;
};

void increment(struct Person a, struct Person *b)
{
    a.age++;
    b->age++;
    printf("Output inside increment function\n");
    printf("age with a: %d", a.age);
    printf("\nage with b: %d\n", b->age);
}
int main()
{
    struct Person a = {10};
    struct Person b = {10};

    increment(a, &b);

    printf("\n--------------------\n");
    printf("Output inside main function\n");
    printf("age with a: %d\n", a.age);
    printf("age with b: %d", b.age);
}