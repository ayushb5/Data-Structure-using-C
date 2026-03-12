// Length of SLL, Reverse a Linked List

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head, *temp, *newnode, *prevnode, *nextnode;
int main()
{
    int ch, count = 0;
    do
    {
        printf("\n1. Insert data\n2. Length of Linked List\n3. Reverse Linked List\n4. Display\n5. Exit\nPlease enter your choice:");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("Enter data to insert:");
            scanf("%d", &newnode->data);
            newnode->next = 0;
            if (head == 0)
            {
                head = temp = newnode;
            }
            else
            {
                temp = head;
                while (temp->next != 0)
                {
                    temp = temp->next;
                }
                temp->next = newnode;
                newnode->next = 0;
            }
            break;

        case 2:
            temp = head;
            if (head == 0)
            {
                printf("\nLinked List is empty, Insert data..");
            }
            else
            {
                while (temp != 0)
                {
                    temp = temp->next;
                    count++;
                }

                printf("Length of Linked List: %d", count);
            }
            break;

        case 3:
            temp = nextnode = head;
            prevnode = 0;
            if (head == 0)
            {
                printf("\nLinked List is empty, Insert data..");
            }
            else
            {
                temp = nextnode = head;
                while (nextnode != 0)
                {
                    nextnode = nextnode->next;
                    temp->next = prevnode;
                    prevnode = temp;
                    temp = nextnode;
                }
                head = prevnode;

                temp = head;
                while (temp != 0)
                {
                    printf("%d ", temp->data);
                    temp = temp->next;
                }
            }
            break;

        case 4:
            count = 0;
            temp = head;
            if (head == 0)
            {
                printf("\nLinked List is empty, Insert data..");
            }
            else
            {
                printf("\nLinked List:");
                while (temp != 0)
                {
                    printf("%d ", temp->data);
                    temp = temp->next;
                }
                printf("\n");
            }
            break;
        }
    } while (ch != 5);
}