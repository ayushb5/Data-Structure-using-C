// DLL Deletion- delete from beginning, from specific position, from end

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
    int ch, count = 0;
    do
    {
        printf("\n1. Insert Element\n2. Delete from beginning\n3. Delete from specific position\n4. Delete from end\n5. Display\n6. Exit\nEnter your choice: ");
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
                newnode->prev = 0;
            }
            else
            {
                temp = head;
                while (temp->next != 0)
                {
                    temp = temp->next;
                }
                newnode->prev = temp;
                temp->next = newnode;
            }
            count++;
            break;

        case 2:
            temp = head;
            if (head == 0)
            {
                printf("\nLinked List is Empty");
            }
            else if (temp->next != 0)
            {
                head = temp->next;
                head->prev = 0;
                free(temp);
            }
            else
            {
                free(temp);
                head = 0;
            }
            count--;
            break;

        case 3:
        {
            int pos, i = 1;
            temp = head;
            if (head == 0)
            {
                printf("\nLinked List is empty..");
            }
            else
            {
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                if (pos < 1 || pos > count)
                {
                    printf("Invalid position..");
                }
                else if (pos == 1)
                {
                    head = temp->next;
                    if (head != 0)
                    {
                        head->prev = 0;
                    }
                    free(temp);
                    count--;
                }
                else
                {
                    while (i < pos)
                    {
                        temp = temp->next;
                        i++;
                    }
                    temp->prev->next = temp->next;
                    if (temp->next != 0)
                    {
                        temp->next->prev = temp->prev;
                    }

                    free(temp);
                    count--;
                }
            }
            break;
        }
        case 4:
            temp = head;
            if (head == 0)
            {
                printf("\nLinked List is empty.");
            }
            else if (temp->next != 0)
            {
                while (temp != 0)
                {
                    temp = temp->next;
                }
                temp->prev->next = 0;
                free(temp);
            }
            else
            {
                free(temp);
                head = 0;
            }
            count--;
            break;

        case 5:
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
        }
    } while (ch != 6);
}