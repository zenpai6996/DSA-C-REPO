#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
void linkedlisttraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element:%d\n", ptr -> data);
        ptr = ptr -> next;
    }
    printf("\n");
}
struct Node * insertatfirst(struct Node * head , int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr -> next = head;
    ptr -> data = data;

    return ptr;
    }


int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // allocate memory for linked list in memory in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    // link first and second nodes
    head->data = 7;
    head->next = second;
    // link second and third nodes
    second->data = 11;
    second->next = third;
    // terminate the linked list after the third node
    third->data = 17;
    third->next = fourth;

    fourth->data = 18;
    fourth->next = NULL;

    linkedlisttraversal(head);

    head = insertatfirst(head , 56);

    linkedlisttraversal(head);

    return 0;
}