#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
void lltraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
struct Node *deleteinbetween(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 3;
    head->next = second;

    second->data = 4;
    second->next = third;

    third->data = 5;
    third->next = fourth;

    fourth->data = 6;
    fourth->next = NULL;

    printf("linked list before deletion is :\n");
    lltraversal(head);

    head = deleteinbetween(head, 3);

    printf("linked list after deletion is :\n");
    lltraversal(head);

    return 0;
}