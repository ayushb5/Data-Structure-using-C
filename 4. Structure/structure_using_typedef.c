#include <stdio.h>

typedef struct Person
{
    char name[10];
    int age;
} person;

int main()
{
    person p = {"John", 30};
    printf("%s %d", p.name, p.age);
}
