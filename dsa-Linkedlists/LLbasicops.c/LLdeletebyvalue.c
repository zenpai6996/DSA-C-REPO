#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node * next;
}Node;
void LLtraversal(Node *ptr){

    while(ptr != NULL){
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}
 Node * deleteAtIndex( Node * head, int value){
 Node *p = head;
     Node *q = head->next;
    while(q->data!=value && q->next!= NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    if(q->data == value){
        p->next = q->next;
        free(q);
    }
    return head;
}
int main (){

       Node *head;
     Node *second;
     Node *third;
     Node *fourth;

    head = ( Node *)malloc(sizeof( Node));
    second = ( Node *)malloc(sizeof( Node));
    third = ( Node *)malloc(sizeof( Node));
    fourth = ( Node *)malloc(sizeof( Node));

    head->data = 3;
    head->next = second;

    second->data = 4;
    second->next = third;

    third->data = 5;
    third->next = fourth;

    fourth->data = 6;
    fourth->next = NULL;

    printf("linked list before deletion is :\n");
    LLtraversal(head);

    head = deleteAtIndex(head,5);

    printf("linked list after deletion is :\n");
    LLtraversal(head);

    return 0;
}