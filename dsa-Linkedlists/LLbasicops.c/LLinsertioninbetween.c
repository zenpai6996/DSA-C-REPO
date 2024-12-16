#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedlisttraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("element: %d\n", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
struct Node *insertinbetween(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
}

int main()
{

    struct Node * head;
    struct Node * second;
    struct Node * third ;
    struct Node * fourth ;

     head = (struct Node * )malloc(sizeof(struct Node )); 
     second = (struct Node * )malloc(sizeof(struct Node )); 
     third = (struct Node * )malloc(sizeof(struct Node )); 
     fourth = (struct Node * )malloc(sizeof(struct Node )); 

     head -> data = 7;
     head -> next = second ;

     second -> data = 11 ;
     second -> next = third ;

     third -> data = 17;
     third -> next = fourth;

     fourth -> data = 23 ;
     fourth -> next = NULL;

     printf("the linked list before insertion\n");
     linkedlisttraversal(head);

     insertinbetween(head , 56,3);

     printf("the linked list after insertion\n");
     linkedlisttraversal(head);


    return 0;
}