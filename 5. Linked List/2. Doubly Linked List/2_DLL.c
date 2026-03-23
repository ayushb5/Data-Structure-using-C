// Insertion in DLL - insert -> at beginning, at specific position, at end

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
        printf("\n1. Insert at beginning\n2. Insert at specific position\n3. Insert at end\n4. Display\n5. Exit\nEnter your choice: ");
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
                head = newnode;
                newnode->next = temp;
                temp->prev = newnode;
                newnode->prev = temp;
                temp = newnode;
            }
            count++;
            break;

        case 2:
            temp = head;
            int pos, i = 1;
            if (head == 0)
            {
                printf("\nList is empty, insert at beginning first.");
            }
            else
            {
                printf("Enter position to insert data at: ");
                scanf("%d", &pos);
                if (pos < 1 || pos > count)
                {
                    printf("Enter valid position to insert at..");
                }
                else
                {
                    newnode = (struct node *)malloc(sizeof(struct node));
                    printf("Enter data: ");
                    scanf("%d", &newnode->data);
                    newnode->next = 0;
                    newnode->prev = 0;
                    if (pos == 1)
                    {
                        newnode->next = head;
                        head->prev = newnode;
                        head = newnode;
                    }
                    else
                    {
                        while (i < pos - 1)
                        {
                            temp = temp->next;
                            i++;
                        }
                        newnode->next = temp->next;
                        newnode->prev = temp;
                        if (temp->next != 0)
                            temp->next->prev = newnode;
                        temp->next = newnode;
                    }
                    count++;
                }
            }
            break;

        case 3:
            if (head == 0)
            {
                printf("\nList is empty, insert at beginning first.");
            }
            else
            {
                newnode = (struct node *)malloc(sizeof(struct node));
                printf("Enter data: ");
                scanf("%d", &newnode->data);
                newnode->next = 0;
                newnode->prev = 0;
                temp = head;
                while (temp->next != 0)
                {
                    temp = temp->next;
                }
                newnode->prev = temp;
                temp->next = newnode;

                count++;
            }
            break;
        case 4:
            temp = head;
            if (head == 0)
            {
                printf("Linked List is empty");
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