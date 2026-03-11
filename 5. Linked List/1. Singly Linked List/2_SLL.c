// Insert at beginning,at end, after given position
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = 0, *temp, *newnode;

int main()
{
    int ch, count = 0;
    do
    {
        printf("\n1. Insert at beginning\n2. Insert at end\n3. Insert after given position\n4. Display Data\n5. Exit\nPlease enter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("Enter data to insert at start:");
            scanf("%d", &newnode->data);
            if (head == 0)
            {
                head = temp = newnode;
            }
            else
            {
                newnode->next = head;
                head = newnode;
            }
            count++;
            break;

        case 2:

            if (head == 0)
            {
                printf("List is empty. Insert at beginning first.");
            }
            else
            {
                newnode = (struct node *)malloc(sizeof(struct node));
                printf("Enter data to insert at end:");
                scanf("%d", &newnode->data);
                newnode->next = 0;
                temp = head;
                while (temp->next != 0)
                {
                    temp = temp->next;
                }
                temp->next = newnode;
                count++;
            }
            break;

        case 3:
            temp = head;
            int pos, i = 1;
            printf("\nEnter position to insert element after it:");
            scanf("%d", &pos);
            if (head == 0)
            {
                printf("List is empty. Insert at beginning first.");
            }
            else if (pos < 1 || pos > count)
            {
                printf("Invalid input");
            }
            else
            {
                newnode = (struct node *)malloc(sizeof(struct node));
                printf("\nEnter data to insert:");
                scanf("%d", &newnode->data);
                while (i < pos)
                {
                    temp = temp->next;
                    i++;
                }
                newnode->next = temp->next;
                temp->next = newnode;
                count++;
            }
            break;

        case 4:
            temp = head;
            if (head == 0)
            {
                printf("List is empty.");
            }
            else
            {
                printf("\nLinked List: ");
                while (temp != 0)
                {
                    printf("%d ", temp->data);
                    temp = temp->next;
                }
            }
            break;
        }
    } while (ch != 5);
}