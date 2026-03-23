// Reversing a Doubly Linked List
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head, *tail;

int main()
{
    struct node *current, *nextnode, *newnode;
    int ch;
    do
    {
        printf("\n1. Insert Elements\n2. Reverse Elements\n3. Display\n4. Exit\nEnter your choice:");
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
                head = tail = newnode;
            }
            else
            {
                current = head;
                while (current->next != 0)
                {
                    current = current->next;
                }
                newnode->prev = current;
                current->next = newnode;
                tail = newnode;
            }
            break;

        case 2:
            current = head;
            if (head == 0)
            {
                printf("\nLinked List is empty.");
            }
            else
            {
                current = head;
                while (current != 0)
                {
                    nextnode = current->next;
                    current->next = current->prev;
                    current->prev = nextnode;
                    current = nextnode;
                }
                current = head;
                head = tail;
                tail = current;

                printf("\nList reversed succesfully.");
            }
            break;
        case 3:
            current = head;
            while (current != 0)
            {
                printf("%d ", current->data);
                current = current->next;
            }
            break;
        }
    } while (ch != 4);
}