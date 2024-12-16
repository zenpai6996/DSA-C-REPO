#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *createlinkedlist(int n);
struct Node *insertatindex(struct Node *head,int data , int index);
struct Node *deleteatindex(struct Node *head ,int index);
int countNodes(struct Node *head);
void linkedlisttransversal(struct Node *head);

int main (){
    struct Node *head =NULL;
    int choice,data,index,n;


    while(1){
        printf("\nMenu\n");
        printf("1.create linked list\n");
        printf("2.Insert a node at specific position\n");
        printf("3.delete a node at specific position\n");
        printf("4.Count Nodes\n");
        printf("5.transverse the list \n");
        printf("6.Exit\n");
        printf("enter your choice \n");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("enter the number of elements in the linked list:\n");
            scanf("%d",&n);
            head = createlinkedlist(n);
            break;

            case 2:
            printf("enter the data to insert ");
            scanf("%d",&data);
            printf("Enter the position of the node ");
            scanf("%d",&index);
            head = insertatindex(head,data,index);
            break;

            case 3:
            printf("enter the position to delete the node ");
            scanf("%d",&index);
            head = deleteatindex(head,index);
            break;

            case 4:
            printf("Number of nodes :%d\n",countNodes(head));
            break;

            case 5:
            printf("Linked list elements :\n");
            linkedlisttransversal(head);
            break;

            case 6:
            exit(0);

            default:
            printf("Invalid choice .Please try again \n");
        }
    }
    return 0;
}

struct Node *createlinkedlist(int n ){
    struct Node *head = NULL;
    struct Node *temp = NULL;
    struct Node *p = NULL;
    int data ;

    for (int i = 0;i<n;i++){
        temp = (struct Node *)malloc(sizeof(struct Node ));
        printf("Enter elements %d:",i+1);
        scanf("%d",&data);

        temp -> data  = data;
        temp -> next = NULL;

        if(head == NULL){
            head = temp ;
        }else {
            p -> next = temp;
        }
        p=temp;

        }
        return head ;
    }

struct Node *insertatindex(struct Node *head,int data, int index){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node ));
    struct Node *p = head ;
    int i =0;
    while(i != index-1){
        p=p->next;
        i++;
    }
    ptr -> data = data;
    ptr -> next = p-> next;
    p -> next = ptr ;
    return head;
}
struct Node *deleteatindex(struct Node *head , int index){

    struct Node *p= head ;
    struct Node *q = head -> next ;
    for(int i =0;i<index ;i++){
        p = p-> next;
        q = q-> next;

    }
    p->next=q->next;
    free(q);
    return head ;

    
}

int countNodes(struct Node *head){
    int count = 0;
    struct Node *temp = head ;
    while(temp != NULL){
        count++;
        temp=temp->next;

    }
    return count;
}

void linkedlisttransversal(struct Node *head){
    struct Node *temp = head ;
    while(temp != NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

  
