// Implementation of Circular Linked List
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *newnode, *temp;

int main()
{
    int ch;
    do
    {
        printf("\n1. Insert data\n2. Display\n3. Exit\nPlease enter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("\nEnter data:");
            scanf("%d", &newnode->data);
            if (head == 0)
            {
                head = temp = newnode;
                newnode->next = head;
            }
            else
            {
                temp->next = newnode;
                temp = newnode;
                temp->next = head;
            }
            break;

        case 2:
            temp = head;
            if (head == 0)
            {
                printf("Linked List is Empty..");
            }
            else
            {
                struct node *ptr = head;
                do
                {
                    printf("%d ", ptr->data);
                    ptr = ptr->next;
                } while (ptr != head);
            }

            break;
        default:
            printf("\nInvalid Choice");
            break;
        }
    } while (ch != 3);
}