#include <stdio.h>

struct Person
{
    char name[10];
    int age;
};
int main()
{
    struct Person p = {"John", 30};
    struct Person *ptr = &p;
    printf("Person details:\n");
    printf("Person Name: %s\n", ptr->name);
    printf("Person Age: %d\n", ptr->age);
}