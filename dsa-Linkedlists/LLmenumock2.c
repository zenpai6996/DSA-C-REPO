#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *createLL(int n ){
    struct Node *head = NULL;
    struct Node *temp = NULL;
    struct Node *p = NULL;
    int data ;
    for (int i=0;i <n;i++){
        temp = (struct Node *)malloc(sizeof(struct Node ));
        printf("Enter the elements %d:\n",i+1);
        scanf("%d",&data);
        temp -> data =data;
        temp -> next = NULL;
        if (head == NULL){
            head = temp ;
        }else{
            p -> next = temp;

        }
        p=temp;

    }
    return head ;
}

void LLtraversal(struct Node *head){
    struct Node * temp = head ;
    while(temp != NULL){
        printf("%d\n",temp->data);
        temp = temp -> next;

        }
        printf("NULL\n");

}
struct Node * insertatfirst(struct Node * head , int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr -> next = head;
    ptr -> data = data;

    return ptr;
    }

struct Node *insertatend(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr -> data = data;
    struct Node *p = head;
    while(p -> next != NULL){
        p = p -> next;
    }
    p-> next = ptr;
    ptr -> next = NULL;


    return head;
}

struct Node * insert (struct Node *head ,int data,int index ){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node ));
    struct Node *p= head;
    int i =0;
    while (i != index -1){
    p = p-> next;
    i++;
    }
    ptr -> data = data ;
    ptr -> next = p -> next ;
    p -> next = ptr ;
    return head;

}

struct Node *deletefirstnode(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}



struct Node *deleteatlast(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next =NULL;
    free(q);
    return head;
}
struct Node *delete(struct Node *head ,int index){
    struct Node *p = head ;
    struct Node *q = head->next ;
    for (int i= 0;i<index ;i++){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head ;
}

 
int main (){
    int data,n,choice,index,key ;
    struct Node * head = NULL;

    while(1){
        printf("\nMENU\n");
        printf("1.create Linked List .\n");
        printf("2.Traverse linked List .\n");
        printf("3.Insert element at beginning  .\n");
        printf("4.Insert an element at an end .\n");
        printf("5.insert an element in between .\n");
        printf("6.delete an element at the beginning . \n");
        printf("7.delete an element at the end .\n");
        printf("8.delete an element in between  .\n");
        printf("9.EXIT\n");

        scanf("%d",&choice);

    

    switch (choice )
    {
    case 1: 
        printf("Enter the number of elements :\n");
        scanf("%d",&n);
        head = createLL(n);

        break;

    case 2:
    printf("Linked List elements :\n");
    LLtraversal(head);
    break;

    case 3:
    printf("Enter the element you want to insert: \n");
    scanf("%d",&data);
    head = insertatfirst(head ,data);
    LLtraversal(head);
    break;

    case 4:
    printf("Enter the element you want to insert: \n");
    scanf("%d",&data);
    head = insertatend(head ,data);
    LLtraversal(head);
    break;

    case 5:
    printf("Enter the element you want to insert: \n");
    scanf("%d",&data);
    printf("Enter the index .\n");
    scanf("%d",&index);
    head = insert(head ,data,index);
    LLtraversal(head);
    break;

    case 6:
    head = deletefirstnode(head);
    printf("the linked list after deleting the element is :\n");
    LLtraversal(head);
    break;

    case 7:
    head = deleteatlast(head);
    printf("the linked list after deleting the element is :\n");
    LLtraversal(head);
    break;

    case 8: 
    printf("Enter the index :\n");
    scanf("%d",&index);
    head = delete(head ,index );
    LLtraversal(head);
    break;
    

    case 9:
    exit(0);

    
    default:
        printf("Invalid choice ");
        
    }

    }
    return 0;
}