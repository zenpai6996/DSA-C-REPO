#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *createlinkedlist(int n);
struct Node *mergeLinkedLists(struct Node *head1, struct Node *head2);
void linkedlisttransversal(struct Node *head);

int main (){
    
     struct Node *head1 = NULL; // First linked list
    struct Node *head2 = NULL; // Second linked list
    struct Node *mergedHead = NULL;
    int choice,data,index,n;


    while(1){
        printf("\nMenu\n");
        printf("1.create first linked list\n");
        printf("2.create second linked lsit \n");
        printf("3.merge the two linked lists\n");
        printf("4.transverse the merged linked list \n");
        printf("5.Exit\n");
        printf("enter your choice \n");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("enter the number of elements in the linked list:\n");
            scanf("%d",&n);
            head1 = createlinkedlist(n);
            break;

            case 2:
            printf("enter the number of elements in the linked list:\n");
            scanf("%d",&n);
            head2 = createlinkedlist(n);
            break;

            case 3:
                printf("Merging the two linked lists...\n");
                mergedHead = mergeLinkedLists(head1, head2);
                printf("Lists merged successfully!\n");
                break;

            case 4:
            printf("Linked list elements :\n");
            linkedlisttransversal(mergedHead);
            break;

            case 5:
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



void linkedlisttransversal(struct Node *head){
    struct Node *temp = head ;
    while(temp != NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
struct Node *mergeLinkedLists(struct Node *head1, struct Node *head2) {
    if (head1 == NULL) return head2;
    if (head2 == NULL) return head1;

    struct Node *mergedHead = NULL;
    struct Node *mergedTail = NULL;

    // Initialize the merged linked list
    if (head1->data <= head2->data) {
        mergedHead = mergedTail = head1;
        head1 = head1->next;
    } else {
        mergedHead = mergedTail = head2;
        head2 = head2->next;
    }

    // Merge the two lists
    while (head1 != NULL && head2 != NULL) {
        if (head1->data <= head2->data) {
            mergedTail->next = head1;
            head1 = head1->next;
        } else {
            mergedTail->next = head2;
            head2 = head2->next;
        }
        mergedTail = mergedTail->next;
    }

    // Attach the remaining nodes of the longer list
    if (head1 != NULL) mergedTail->next = head1;
    if (head2 != NULL) mergedTail->next = head2;

    return mergedHead;
}

  
