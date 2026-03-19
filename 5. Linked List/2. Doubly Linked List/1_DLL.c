// Implementation of Doubly Linked List (creation)

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head, *temp, *newnode;
int main()
{
    int ch;
    do
    {
        printf("\n1. Insert data\n2. Display\n3. Exit\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("Enter data: ");
            scanf("%d", &newnode->data);
            newnode->next = 0;
            newnode->prev = 0;

            if (head == 0)
            {
                head = temp = newnode;
                newnode->prev = head;
                newnode->next = 0;
            }
            else
            {
                temp->next = newnode;
                newnode->prev = temp;
                temp = newnode;
            }
            break;

        case 2:
            temp = head;
            if (head == 0)
            {
                printf("\nLinked List is empty.");
            }
            else
            {
                while (temp != 0)
                {
                    printf("%d ", temp->data);
                    temp = temp->next;
                }
            }
            break;

        default:
            printf("Invalid choice");
            break;
        }
    } while (ch != 3);
}