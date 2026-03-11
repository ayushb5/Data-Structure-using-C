#include <stdio.h>
#include <string.h>

struct student
{
    char name[10];
    int roll_no;
    int marks;
};
// 2nd way to declare structure in main
struct person
{
    char name[10];
    int age;
} p1;
int main()
{
    struct student s1 = {"John", 1, 89};
    printf("%s", s1.name);
    printf("\n%d", s1.roll_no);
    printf("\n%d", s1.marks);
    printf("\n---------------------------------------");
    strcpy(p1.name, "Kiran");
    p1.age = 30;
    printf("\n%s", p1.name);
    printf("\n%d", p1.age);
    // Copy one structure content to another
    printf("\n-----------------------------------------");
    struct student s2;
    s2 = s1;
    printf("\n%s", s2.name);
    printf("\n%d", s2.roll_no);
    printf("\n%d", s2.marks);
}