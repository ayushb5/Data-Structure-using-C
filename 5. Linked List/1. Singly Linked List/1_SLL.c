// Basic program for SLL to insert a newnode

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = 0, *newnode, *temp;

int main()
{
    int ch;
    do
    {
        printf("\n1. Create data\n2. Display elements\n3. Exit\nEnter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("Enter data: ");
            scanf("%d", &newnode->data);
            newnode->next = NULL;
            if (head == 0)
            {
                head = temp = newnode;
            }
            else
            {
                temp->next = newnode;
                temp = newnode;
            }

            break;

        case 2:
            temp = head;
            while (temp != 0)
            {
                printf("%d ", temp->data);
                temp = temp->next;
            }
            break;
        }
    } while (ch != 3);
}